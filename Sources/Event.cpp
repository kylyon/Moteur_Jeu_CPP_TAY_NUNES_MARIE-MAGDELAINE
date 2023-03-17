//
// Created by Raf on 16/03/2023.
//

#include "../Headers/Event.h"

void Event::Notify() {
    for (const auto& listener : listeners) {
        listener();
    }
}