#ifndef LISTAORDENADAENCADEADA_H
#define LISTAORDENADAENCADEADA_H
#include "NoSimples.cpp"
#pragma once

class ListaOrdenadaEncadeada
{
public:
    ListaOrdenadaEncadeada();
    ~ListaOrdenadaEncadeada();
    void insere(int val);
    void remove(int val);
    int busca (int val); //vai retornar o k

    void insereK(int k);
    void removeK(int k);
    int buscaK (int k); //vai retornar o val


    void imprime();

private:
    NoSimples *primeiro;
};

#endif