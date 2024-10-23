#ifndef FILAENCADEADA_H
#define FILAENCADEADA_H
#include "NoSimples.h"
#pragma once

class FilaEncadeada
{
public:
    FilaEncadeada();
    ~FilaEncadeada();
    int getInicio(); // retorna No do inicio
    void enfileira(int val); // insere No no fim
    int desenfileira(); // elimina No do inicio
    bool vazia(); // verifica se esta vazia
    void imprime();

private:
    NoSimples *inicio;
    NoSimples *fim;
};

#endif