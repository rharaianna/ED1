#include "../Headers/ListaContigua.h"
#include <iostream>
using namespace std;

// Construtor e destrutor
ListaContigua::ListaContigua(int tam)
{
    max = tam;
    n = 0;
    vet = new int[max]; 
}
ListaContigua::~ListaContigua()
{
    delete [] vet;
}

//Básicos
int ListaContigua::get(int k)
{
    if(k>=0 && k<=n) //garante que o no k pedido existe um nó preenchido
    {
        return vet[k];
    }
    cout<<"Posição inválida"<< endl;
    exit(1);
}
void ListaContigua::set(int k, int val)
{
     if(k>=0 && k<=n) //garante que o no k pedido existe um nó preenchido
    {
        vet[k]= val;
    }
    else
    {
         cout<<"Posição inválida"<< endl;
    }
}
void ListaContigua::imprime()
{
    cout<<"Lista: ";
    for(int i =0; i<n ;i++)
    {
        cout<<  vet[i] << " ";
    }
    cout<<endl;
}
void ListaContigua::aumentaCapacidade()
{
    cout << "Aumentando a capacidade do vetor" << endl;
    int *temp = new int[max*2];
    for(int i = 0; i < max; i++)
        temp[i] = vet[i];
    delete [] vet;
    vet = temp;
    max *= 2;
}

//Insere
void ListaContigua::insereK(int k, int val){
    if(k>=0 && k<max){
        if (n==max){
        aumentaCapacidade();
        }
        for(int i = n; i>k;i--){
            vet[i]=vet[i-1];
        }
        vet[k]=val;
        n++;
    }
    else{
        cout<<"Posição inválida"<<endl;
    }
}
void ListaContigua::insereInicio(int val){
    if(n==0){
        cout<<"Primeiro elemento adicionado na lista";
        vet[n]=val;
        n++;
    }
    else{
        insereK(0,val);
    }
}
void ListaContigua::insereFinal(int val){
    if (n==max){
        aumentaCapacidade();
    }
    vet[n]=val;
    n++;
}
void ListaContigua::insereInicio2(int val){
    if (n==max){
        cout<<"Dobrando a capacidade da lista";
        int * temp = new int[max*2];
        temp[0]= val;
        for(int i = 0; i<max;i++){
            temp[i+1]=vet[i];
        }
        delete[] vet;
        vet= temp;
        max*=2;
        n++;
    }
    else{
        for(int i=n;i>0;i--){
            vet[i]= vet[i-1];
        }
        vet[0]=val;
        n++;
    }
}

//Remove
void ListaContigua::removeK(int k){
    if(k>=0 && k<n){
        for(int i= k ; i<n-1;i++){
            vet[i]=vet[i+1];
        }
        n--;
    }
    else{
        cout << "Posicao invalida" << endl;
    }
}
void ListaContigua::removeFinal(){
    if(n>0){
        n--;
    }
    else{
        cout<<"Lista vazia"<<endl;
    }
    
}
void ListaContigua::removeInicio(){
    if(n>0){
        removeK(0);
    }
    else{
        cout<<"Lista vazia"<<endl;
    }
}  
void ListaContigua::removeInicio2(){
    if(n > 0)
    {
        for(int i = 0; i < n-1; i++)
            vet[i] = vet[i+1];
        n--;
    }
    else
        cout << "Lista vazia" << endl;
}

//Ex slide
int ListaContigua::numNos(){
    return n;
}
void ListaContigua::limpar(){
    n = 0;
}
int ListaContigua::buscaMaior(int val){
    for(int i =0;i<n;i++){
        if(vet[i]>val)
            return i;
    }
    return -1;
}  
void ListaContigua::insereValores(int t, int v[]){
    if(t+n<max){
        for(int i = 0; i<t; i++){
            vet[n]=v[i];
            n++;
        }
    }
    else{
        cout<<"O vetor nao cabe na lista"<< endl;
    }
}

//Outros
ListaContigua* ListaContigua::copia(){
    ListaContigua *nova = new ListaContigua(max);
    for(int i =0;i<max;i++){
        nova->vet[i]= vet[i];
    }
    return nova;
}
ListaContigua* ListaContigua::concatena(ListaContigua *l2){
    ListaContigua *nova = new ListaContigua(max+l2->max);
    for(int i = 0;i<n;i++){
        nova->vet[i]= vet[i];
    }
    for(int i = 0;i<l2->n;i++){
        nova->vet[i+n]=l2->vet[i];
    }
    nova->n = n + l2->n;

    return nova;
}
ListaContigua* ListaContigua::copiar(int valor){ //ta meio errado
    ListaContigua * nova = new ListaContigua(max);
    
    int i;
    for (i = 0; i<n; i++){
        if(vet[i]== valor)
            break;
    }
    
    while (i<n){
        nova->insereFinal(vet[i]);
        removeK(i);
    }

    return nova;

}
void ListaContigua::inserirVet(int tam, int v[]){
    max = max+tam;
    int * l2 = new int(max);
    for(int i = 0; i<tam; i++){
        l2[i] = v[i];
    }
    for(int i = 0 ; i<n; i++){
        l2[i+tam] = vet[i];
    }

    n= n + tam;
    delete [] vet;
    vet = l2;
}
void ListaContigua::intercala(ListaContigua *la, ListaContigua *lb){
    int novoTam = la->n + lb->n;
    int *temp = new int [novoTam];

    int contadorA=0;
    int contadorB=0;
    
    if(la->n == lb->n){
        for(int i = 0; i<novoTam;i++){
            if(i%2 ==0){
                temp[i]=la->get(contadorA);
                contadorA++;
            }
            else{
                temp[i]=lb->get(contadorB);
                contadorB++;
            }
        }
    }
    else if (la->n > lb->n){
        int i = 0;
        for(; i<(lb->n)*2;i++){
            if(i%2 ==0){
                temp[i]=la->get(contadorA);
                contadorA++;
            }
            else{
                temp[i]=lb->get(contadorB);
                contadorB++;
            }
        }
        for(; i<novoTam;i++){
            temp[i]=la->get(contadorA);
            contadorA++;
        }
    }
    else{
        int i = 0;
        for(; i<(la->n)*2;i++){
            if(i%2 ==0){
                temp[i]=la->get(contadorA);
                contadorA++;
            }
            else{
                temp[i]=lb->get(contadorB);
                contadorB++;
            }
        }
        for(; i<novoTam;i++){
            temp[i]=lb->get(contadorB);
            contadorB++;
        }
    }

    delete [] vet;
    vet = temp;
    n = novoTam;
    la->n = 0;
    lb->n = 0;

}
