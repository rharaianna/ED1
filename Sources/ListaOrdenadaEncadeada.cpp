#include "../Headers/ListaOrdenadaEncadeada.h"

#include <iostream>
using namespace std;


ListaOrdenadaEncadeada::ListaOrdenadaEncadeada()
{
    primeiro = NULL;
}

ListaOrdenadaEncadeada::~ListaOrdenadaEncadeada()
{
    NoSimples*p = primeiro;
    while(p!=NULL){
        NoSimples *t = p->getProx();
        delete p;
        p = t;
    }
}


void ListaOrdenadaEncadeada::insere(int val){
    NoSimples *p = new NoSimples ();
    NoSimples *ant = NULL;
    NoSimples *atual = primeiro;

    p->setInfo(val);

    while(atual!=NULL && val>=atual->getInfo()){
        ant = atual;
        atual = atual->getProx();
    }

    if(ant == NULL){
        p->setProx(primeiro);
        primeiro = p;
    }

    else{
        ant->setProx(p);
        p->setProx(atual);
    }
}


void ListaOrdenadaEncadeada::remove(int val){
    NoSimples *ant = NULL;
    NoSimples *atual = primeiro;

    while(atual!= NULL && val != atual->getInfo()){
        ant= atual;
        atual = atual->getProx();
    }

    if(ant == NULL){
        cout<<"Lista vazia, nada a remover"<< endl;
    }
    
    else{
        ant->setProx(atual->getProx());
        delete atual;
        cout<<"Removido com sucesso!"<< endl;
    }
    imprime();
}


int ListaOrdenadaEncadeada::busca (int val){
    NoSimples *procura = primeiro;
    int contador = 0;
    while(procura != NULL){
        if(procura->getInfo()== val){
            return contador;
        }
        contador ++;
        procura = procura->getProx();
    }
    return -1;
}


void ListaOrdenadaEncadeada::removeK(int k){
    NoSimples *ant = NULL;
    NoSimples *atual = primeiro;
    int contador = 0;
    while (contador<=k && atual!=NULL){
        ant = atual;
        atual = atual->getProx();
        contador++;
    }
    if (atual == NULL){
        cout<<"Posição não encontrada na lista"<< endl;
    }
    else{
        ant = atual->getProx(); // e se for o penultimo da lista?
        delete atual;
        cout<<"Posição removida"<< endl;
        imprime();
    }
}

int ListaOrdenadaEncadeada::buscaK (int k){
    NoSimples *ant = NULL;
    NoSimples *atual = primeiro;
    int contador = 0;
    while (contador<=k && atual!=NULL){
        ant = atual;
        atual = atual->getProx();
        contador++;
    }
    if (ant == NULL){
        cout<<"Lista Vazia"<< endl;
        return -1; 
    }
    else if (atual == NULL){
        cout<<"Posição não encontrada na lista"<< endl;
        return -1;
    }
    else{
        cout<<"Posição encontrada na lista"<< endl;
        return atual->getInfo();
    }

}

void ListaOrdenadaEncadeada::imprime(){
    cout<<"Lista: ";
    for(NoSimples*p = primeiro; p!=NULL; p = p->getProx()){
        cout<<p->getInfo()<<" ";
    }
    cout<<endl;
}