#include "../Headers/FilaEncadeada.h"

#include <iostream>
using namespace std;

FilaEncadeada::FilaEncadeada()
{
    inicio = fim = NULL;
}

FilaEncadeada::~FilaEncadeada()
{
    NoSimples *p = inicio;
    while(inicio!=NULL){
        inicio = p->getProx();
        delete p;
        p = inicio;
    }
}

int FilaEncadeada::getInicio(){
    if(inicio!=NULL){
        return inicio->getInfo();
    }
    else{
        cout << "Fila Vazia"<<endl;
        exit(1);
    }
}

void FilaEncadeada::enfileira(int val){
    NoSimples *p = new NoSimples;
    p->setInfo(val);
    p->setProx(NULL);
    if (inicio==NULL){
        inicio = p;
    }
    else{
        fim ->setProx(p);
    }
    fim = p;
} 

int FilaEncadeada::desenfileira(){
    if (inicio != NULL){
        NoSimples *p = inicio;
        inicio = p->getProx();
        if(fim == NULL){ //Não entendi
            fim=NULL;
        }
        int val = p->getInfo();
        delete p;
        return val;
    }
    else{
        cout<<"Fila vazia"<<endl;
        exit(1);
    }
}

bool FilaEncadeada::vazia(){
 return inicio==NULL;
}

void FilaEncadeada::imprime(){
    cout<<"Fila: ";
    for(NoSimples *p = inicio; p!= NULL; p=p->getProx()){
        cout << p->getInfo() << " ";
    }
    cout << endl;
}