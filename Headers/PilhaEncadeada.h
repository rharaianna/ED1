#ifndef PILHAENCADEADA_H
#define PILHAENCADEADA_H

#include "NoSimples.cpp"
#pragma once

class PilhaEncadeada
{
public:
    PilhaEncadeada();
    ~PilhaEncadeada();
    int getTopo();
    void empilha(int val);
    int desempilha();
    bool vazia();
    void imprime();

private:
    NoSimples *topo;
};

#endif