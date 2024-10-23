#ifndef FILACONTIGUA_H
#define FILACONTIGUA_H

#pragma once

class FilaContigua
{
public:
    FilaContigua(int tam);
    ~FilaContigua();
    int getInicio();
    void enfileira(int val);
    int desenfileira();
    bool vazia();

private:
    int max;
    int *vet;
    int inicio;
    int fim;

};

#endif