//
// Created by Raf on 16/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_EVENT_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_EVENT_H

#include <vector>
#include <functional>

class Event {
    public:
        using Listener = std::function<void()>;

        void operator+=(Listener listener) {
            listeners.push_back(listener);
        }

        void Notify();

    private:
        std::vector<Listener> listeners;
};


#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_EVENT_H
