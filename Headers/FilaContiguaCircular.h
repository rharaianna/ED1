#ifndef FILACONTIGUACIRCULAR_H
#define FILACONTIGUACIRCULAR_H

#pragma once

class FilaContiguaCircular
{
public:
    FilaContiguaCircular(int tam);
    ~FilaContiguaCircular();
    int desenfileira();
    void enfileira(int val);
    int getInicio();
    bool vazia();


private:
    int max;
    int *vet;
    int n;
    int inicio;
    int fim;
    int inc(int ind); //incrementa indice
};

#endif