#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H

#include "NoSimples.h"
#pragma once

class ListaEncadeada
{
public:
    //Construtor e destrutor
    ListaEncadeada();
    ~ListaEncadeada();

    //Básicos
    int get(int k);
    void set(int k, int val);
    void imprime();

    //Insere
    void insereInicio(int val);
    void insereK(int k, int val);
    void insereFinal(int val);

    //Remove
    void removeInicio();
    void removeK(int k);
    void removeFinal();

    //Outros
    bool busca(int val);
    int numNos();

private:
    NoSimples *primeiro;
};

#endif