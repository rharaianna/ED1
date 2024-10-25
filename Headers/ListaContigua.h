#ifndef LISTACONTIGUA_H
#define LISTACONTIGUA_H

#pragma once

class ListaContigua
{
public:
    //Construtor e Destrutor
    ListaContigua(int tam);
    ~ListaContigua();

    //Básicos (fáceis)
    int get(int k);
    void set(int k, int val);
    void imprime();

    //Insere
    void insereInicio(int val);
    void insereK(int k, int val);
    void insereFinal(int val);
    void insereInicio2(int val);

    //Remove
    void removeInicio();
    void removeK(int k);
    void removeFinal();
    void removeInicio2();

    //Ex slide (tranquilos)
    int numNos();
    void limpar();
    int buscaMaior(int val);
    void insereValores(int t, int v[]);

    //Outros
    void inserirVet(int tam, int v[]);
    ListaContigua* copia();
    ListaContigua* copiar(int valor);
    ListaContigua* concatena(ListaContigua *l2);
    void intercala(ListaContigua *la,ListaContigua *lb);




private:
    int max; //Capacidade máxixa
    int n;   //Número de nós
    int *vet; //ponteiro que será direcionado para o vetor que armazena a lista
    void aumentaCapacidade();
};

#endif
