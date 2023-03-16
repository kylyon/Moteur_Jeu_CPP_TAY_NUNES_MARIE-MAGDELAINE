//
// Created by kylli on 15/03/2023.
//

#ifndef MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_POOL_H
#define MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_POOL_H
#include "iostream"

class Pool {
public:
    uint8_t* m_memory;
    uint32_t m_cursor;
    uint32_t m_size;

public:
    void Initialise(uint32_t size);

    void Destroy();

    uint8_t* Allocate(uint32_t size);

};


#endif //MOTEUR_JEU_CPP_TAY_NUNES_MARIE_MAGDELAINE_POOL_H
