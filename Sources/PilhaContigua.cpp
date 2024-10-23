#include "../Headers/PilhaContigua.h"

#include <iostream>
using namespace std;

PilhaContigua::PilhaContigua(int tam)
{
    max = tam;
    topo=-1;
    vet= new int[max];
}

PilhaContigua::~PilhaContigua()
{
    delete [] vet;
}

void PilhaContigua::empilha(int val){
    if(topo < max-1){
        topo++;
        vet[topo]=val;
    }
    cout<<"Vetor cheio"<<endl;
    exit(2);
}

int PilhaContigua::desempilha(){
    if(!vazia()){
        topo = topo -1;
        return vet[topo+1];
    }
    cout<<"Pilha vazia"<<endl;
    exit(1);
}

int PilhaContigua::getTopo(){
    if (!vazia()){
        return vet[topo];
    }
    
    cout<<"Pilha vazia"<<endl;
    exit(1);
}

bool PilhaContigua::vazia(){
    return topo==-1;
}