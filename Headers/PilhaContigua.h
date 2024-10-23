#ifndef PILHACONTIGUA_H
#define PILHACONTIGUA_H

#pragma once

class PilhaContigua
{
public:
    PilhaContigua(int tam);
    ~PilhaContigua();
    void empilha(int val);
    int desempilha();
    int getTopo();
    bool vazia();

private:
    int max;
    int topo;
    int *vet;
};

#endif