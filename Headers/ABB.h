#ifndef ABB_H
#define ABB_H

#include "NoABB.h"
#pragma once

class ABB
{
public:
    ABB();
    ~ABB();
    int getRaiz();
    bool vazia();
    bool busca(int val);
    void remove(int val);
    void insere(int val);
    int min();

private:
    NoABB *raiz;
    NoABB * libera(NoABB*p);
    bool auxBusca(NoABB* p, int val);
    NoABB* auxInsere(NoABB* p, int val);
    int auxMin(NoABB*p);
    NoABB* auxRemove(NoABB*p, int val);
};

#endif