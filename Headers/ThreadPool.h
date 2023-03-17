//
// Created by Kyllian on 17/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_THREADPOOL_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_THREADPOOL_H
#include <iostream>
#include <vector>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <thread>
#include <functional>
#include <atomic>

class ThreadPool {
public:
    ThreadPool(size_t numThreads);
    ~ThreadPool();


    void enqueue(std::function<void()> task);
    bool hasFinished();


    int GetNbTasks();
    void waitUntilFinished();


private:
    std::vector<std::thread> threads;
    std::queue<std::function<void()>> tasks;
    std::mutex queueMutex;
    std::condition_variable condition;
    bool stop = false;

    std::atomic<int> tasksRemaining;
};


#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_THREADPOOL_H
