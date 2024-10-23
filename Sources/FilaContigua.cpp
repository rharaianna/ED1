#include "../Headers/FilaContigua.h"
#include <iostream>
using namespace std;

FilaContigua::FilaContigua(int tam)
{
    vet = new int[max];
    fim=0;
    inicio=0;
    max=tam;
}

FilaContigua::~FilaContigua()
{
    delete [] vet;
}

int FilaContigua::desenfileira(){
    if(!vazia()){
        inicio = inicio + 1;
        return vet[inicio-1];
    }
    cout<<"Fila vazia"<<endl;
    exit(1);
}

int FilaContigua::getInicio(){
    if(!vazia()){
        return vet[inicio];
    }
    cout<<"Fila Vazia"<<endl;
    exit(1);
}

void FilaContigua::enfileira(int val){
    if(fim == max){
        cout<<"Fila Cheia"<<endl;
        exit(2);
    }
    vet[fim] = val;
    fim = fim +1;
}

bool FilaContigua::vazia(){
    return (inicio==fim);
}