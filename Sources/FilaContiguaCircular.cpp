#include "../Headers/FilaContiguaCircular.h"
#include <iostream>
using namespace std;

FilaContiguaCircular::FilaContiguaCircular(int tam)
{
    max = tam;
    vet = new int[max];
    inicio=0;
    fim = 0;
    n = 0;
}

FilaContiguaCircular::~FilaContiguaCircular()
{
    delete [] vet;
}

int FilaContiguaCircular::inc(int ind){
    if(ind==max){
        return 0;
    }
    else{
        return ind+1;
    }
}

int FilaContiguaCircular::desenfileira(){
    if(!vazia()){
        int val = vet[inicio];
        inicio = inc(inicio);
        n--;
        return vet[val];
    }
    cout<<"Fila vazia"<<endl;
    exit(1);
}

void FilaContiguaCircular::enfileira(int val){
    if(n != max){
        vet[fim] = val;
        fim = inc(fim);
        n++;
    }
    cout<<"Fila cheia"<<endl;
    exit(1);
}

int FilaContiguaCircular::getInicio(){
    if(!vazia()){
        return vet[inicio];
    }
    cout<<"Fila Vazia"<<endl;
    exit(1);
}

bool FilaContiguaCircular::vazia(){
    return (n==0);
}