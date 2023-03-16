//
// Created by kylli on 15/03/2023.
//

#include "../Headers/Pool.h"
void Pool::Initialise(uint32_t size)
{
    m_memory = new uint8_t[size];
    m_size = size;
}

void Pool::Destroy()
{
    delete[] m_memory;
}

uint8_t* Pool::Allocate(uint32_t size)
{
    uint8_t* data = &m_memory[m_cursor];
    m_cursor += size;
    return data;
}