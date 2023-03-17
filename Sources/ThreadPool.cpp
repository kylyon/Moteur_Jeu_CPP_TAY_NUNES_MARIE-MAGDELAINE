//
// Created by Kyllian on 17/03/2023.
//

#include "../Headers/ThreadPool.h"

ThreadPool::ThreadPool(size_t numThreads) : tasksRemaining(0) {
    for(size_t i = 0; i < numThreads; i++) {
        threads.emplace_back([this] {
            while(true) {
                std::function<void()> task;

                {
                    std::unique_lock<std::mutex> lock(this->queueMutex);
                    this->condition.wait(lock, [this] { return !this->tasks.empty() || this->stop;});
                    if(this->stop && tasks.empty()) {
                        return;
                    }

                    task = std::move(this->tasks.front());
                    this->tasks.pop();
                }

                task();
                --tasksRemaining;
            }
        });
    }
}

ThreadPool::~ThreadPool() {
    {
        std::unique_lock<std::mutex> lock(queueMutex);
        stop = true;
    }

    condition.notify_all();

    for(auto &thread : threads) {
        thread.join();
    }
}

int ThreadPool::GetNbTasks() {
    return this->tasks.size();
}

void ThreadPool::enqueue(std::function<void()> task) {
    {
        std::unique_lock<std::mutex> lock(queueMutex);
        tasks.push(std::move(task));
    }
    ++tasksRemaining;
    condition.notify_one();
}

void ThreadPool::waitUntilFinished() {
    while(tasksRemaining > 0) {
        std::this_thread::yield();
    }
}

bool ThreadPool::hasFinished() {
    return !(this->tasks.size() > 0);
}