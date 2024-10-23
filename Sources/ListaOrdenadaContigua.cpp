#include "../Headers/ListaOrdenadaContigua.h"

#include <iostream>

using namespace std;

ListaOrdenadaContigua::ListaOrdenadaContigua(int tam)
{
    max = tam;
    n = 0;
    vet = new int[max];
}

ListaOrdenadaContigua::~ListaOrdenadaContigua()
{
    delete [] vet;
}

int ListaOrdenadaContigua::get(int k){
    if(k>=0 && k<=n) //garante que o no k pedido existe um nó preenchido
    {
        return vet[k];
    }
    cout<<"Posição inválida"<< endl;
    exit(1);
}
    
void ListaOrdenadaContigua::inserir(int val){
    int i;
    if(n == max){
        cout<<"aumentando capacidade"<<endl;
        aumentaCapacidade();
    }
    for(i = n-1; i>=0 && vet[i]>=val; i--){
        vet[i+1]=vet[i];
    }
    vet[i+1]=val;
    n= n+1;
}

void ListaOrdenadaContigua::removerK(int k){
    if(k>=0 && k<n){
        for(int i = k; i<n; i++){
            vet[i]= vet[i+1];
        }
        n--;
        cout<<"Indice<<"<< k <<"removido com sucesso"<<endl;
    }
    else{
        cout<<"Posicao invalida"<<endl;
    }

}

void ListaOrdenadaContigua::removerVal(int val){
    int indice = buscaBinaria(val);
    while (indice>=0 && indice<n){
        removerK(indice);
        indice = buscaBinaria(val);
    }

    cout<< "Nada a remover, a Lista ficou: "<<endl;
    imprime();
}
    
void ListaOrdenadaContigua::imprime(){
    cout<<"Lista Ordenada: ";
    for(int i=0;i<n;i++){
        cout<<vet[i]<<" ";
    }
    cout<<endl;
}

void ListaOrdenadaContigua::aumentaCapacidade(){
    int *temp = new int[max*2];
    for(int i=0;i<max;i++){
        temp[i]=vet[i];
    }
    delete [] vet;
    vet= temp;
    max *= 2;
}

int ListaOrdenadaContigua::buscaBinaria(int val){
    int esq = 0; //Índice da extrema esquerda
    int dir = n-1; //Índice da extrema direita
    while(esq>=dir){
        int meio = (esq+dir)/2;
        if(val> vet[meio]){
            esq= meio +1;
        }
        if(val< vet[meio]){
            dir= meio -1;
        }
        else{
            return meio;
        }
    }
    return -1;
}