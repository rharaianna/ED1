#include "../Headers/ListaEncadeada.h"
#include <iostream>
using namespace std;

//Construtor e Destrutor
ListaEncadeada::ListaEncadeada()
{
    primeiro = NULL;
}
ListaEncadeada::~ListaEncadeada()
{
    for(NoSimples*p=primeiro; p!=NULL; ){
        NoSimples*t=p->getProx();
        delete p;
        p=t;
    }
    // pq nn primeiro= NULL??
}

//Básicos
int ListaEncadeada::get(int k){
    if(k<0)
    {
        cout<<"posição Inválida"<<endl;
        exit(1);
    }

    int i = 0;
    for(NoSimples *p = primeiro; p!=NULL; p= p->getProx(),i++){
        if(i==k){
            return p->getInfo();
        }
    }
    cout<<"posição Inválida"<<endl;
    exit(1);
}
void ListaEncadeada::set(int k, int val){
    if(k<0){
        cout<<"posição inválida"<<endl;
    }
    int i =0;
    for(NoSimples*p= primeiro; p!= NULL; p->getProx(),i++){
        if(i==k){
            p->setInfo(val);
            return;
        }
    }
    cout<<"posição inválida"<<endl;

}
void ListaEncadeada::imprime(){
    cout<<"Lista: ";
    for(NoSimples*p = primeiro; p!=NULL; p->getProx()){
        cout<<p->getInfo()<<" ";
    }
    cout<<endl;
}


//Insere
void ListaEncadeada::insereInicio(int val)
{
    NoSimples * p = new NoSimples(val, primeiro); //Cria novo nó
    //p->setInfo(val); //Coloca info no novo nó
    //p->setProx(primeiro); //faz o novo nó apontar para o primeiro da lista
    primeiro= p; // faz o primeiro apontar para p
}
void ListaEncadeada::insereK(int k, int val){
    if(k<0){
        cout<<"Posição inválida"<<endl;
    }
    else if(k==0 && primeiro!=NULL){  //pq a lista não pode estar vazia?
        insereInicio(val);
    }
    else{
        int i = 0;
        NoSimples *ant = primeiro;
        for(;ant!=NULL;ant->getProx(),i++){
            if(i == k-1)
                break;
        }
        
        if(ant==NULL){
        cout<<"Posição inválida"<<endl;
        }
        
        else{
        NoSimples *p = new NoSimples();
        p->setInfo(val);
        p->setProx(ant->getProx());
        ant->setProx(p);
        }
    }

}
void ListaEncadeada::insereFinal(int val){
    NoSimples *ultimo; //Ponteiro para o ultimo elemento da lista
    if(primeiro!=NULL){
        for(ultimo = primeiro; ultimo->getProx() != NULL; ultimo = ultimo->getProx())//aponta ultimo para o ultimo elemento da lista
        {}
    }
    NoSimples *p = new NoSimples();// cria o nó que vai ser adicionado
    p->setInfo(val);//coloca o valor nele
    p->setProx(NULL);//aponta ele para NULL (ja que é o ultimo)

    if(primeiro==NULL){
        primeiro = p;//se a lista tiver vazia o primeiro ja aponta para o p
    }
    else{
        ultimo->setProx(p); //o ultimo elemento aponta para o novo nó
    }
}


//Remove
void ListaEncadeada::removeInicio(){
    if(primeiro!= NULL){
        NoSimples *p = primeiro;
        primeiro= p->getProx();
        delete p;
    }
    else{
        cout<<"Lista vazia"<<endl;
    }
}
void ListaEncadeada::removeK(int k){
    if(k<0){
        cout<<"Posição inválida"<<endl;
    }
    else if(k==0 && primeiro!=NULL){
        removeInicio();
    }
    else{
        int i = 0;
        NoSimples*ant= primeiro;
        for(;ant != NULL; ant = ant->getProx(),i++){
            if(i==k-1)
                break;
        }
        if(ant == NULL){
            cout<<"Posição inválida"<<endl;
        }
        else{
            NoSimples *deletar = ant->getProx();
            if(deletar==NULL){
                cout<<"Posição inválida"<<endl;
            }
            else{
                ant->setProx(deletar->getProx());
                delete deletar;
            }
            
        }
    }
}
void ListaEncadeada::removeFinal(){
    if(primeiro!=NULL)
    {
        if(primeiro->getProx()==NULL){
            removeInicio();
        }
        else{
            NoSimples *penultimo= primeiro;
            for(;penultimo->getProx()->getProx()!=NULL;penultimo=penultimo->getProx())
            {}
            NoSimples*ultimo=penultimo->getProx();
            delete ultimo;
            penultimo->setProx(NULL);
        }
    }
    else{
        cout<<"Lista vazia"<<endl;
    }
        
}


//Outros
bool ListaEncadeada::busca(int val){
    for(NoSimples*p = primeiro; p!= NULL; p = p->getProx()){
        if (p->getInfo()==val){
            return true;
        }
    }
    return false;
}
int ListaEncadeada::numNos(){
    int i = 0;
    for(NoSimples*p=primeiro; p!=NULL;p=p->getProx()){
        i++;
    }
    return i;
}