#include "../Headers/PilhaEncadeada.h"

#include <iostream>
using namespace std;

PilhaEncadeada::PilhaEncadeada()
{
  topo=NULL;
}

PilhaEncadeada::~PilhaEncadeada()
{
    NoSimples *p = topo;
    while(topo!= NULL){
        topo = p->getProx();
        delete p;
        p = topo;
    }
}

int PilhaEncadeada::getTopo(){
    if(topo!=NULL){
        return topo->getInfo();
    }
    cout << "ERRO: Pilha vazia!" << endl;
    exit(1);
}

void PilhaEncadeada::empilha(int val){ //ta empilhando na primeira posição
    NoSimples *p = new NoSimples();
    p->setInfo(val);
    p->setProx(topo);
    topo = p;
}

int PilhaEncadeada::desempilha(){
    NoSimples * p;
    int val;
    if(!vazia()){
        p = topo;
        topo = topo->getProx();
        val = p->getInfo();
        delete p;
        return val; //Return pode ficar aqui?
    }
    cout<<"Lista Vazia"<<endl;
    exit(1);
    
}

bool PilhaEncadeada::vazia(){
    return (topo==NULL);
}

void PilhaEncadeada::imprime(){
    cout << "Pilha: ";
    for(NoSimples *p = topo; p != NULL; p = p->getProx())
        cout << p->getInfo() << " ";
    cout << endl;
}