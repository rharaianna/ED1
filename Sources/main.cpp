//Nós
#include "../Headers/NoSimples.h"
#include "../Headers/NoDuplo.h"
#include "../Headers/NoABB.h"
//Listas
#include "../Headers/ListaContigua.h"
#include "../Headers/ListaDupla.h"
#include "../Headers/ListaEncadeada.h"
#include "../Headers/ListaOrdenadaContigua.h"
#include "../Headers/ListaOrdenadaEncadeada.h"
//Filas
#include "../Headers/FilaContigua.h"
#include "../Headers/FilaContiguaCircular.h"
#include "../Headers/FilaEncadeada.h"
//Pilhas
#include "../Headers/PilhaContigua.h"
#include "../Headers/PilhaEncadeada.h"
//Arvore
#include "../Headers/ABB.h"

//Geral
#include <iostream>
using namespace std;


void testeListas(){
    //Lista Contigua
        //Criação
        ListaContigua ListaCont(7);
        
        //Insersão
        ListaCont.insereInicio(1);
        ListaCont.insereInicio2(9);
        ListaCont.insereFinal(1);
        ListaCont.insereK(0,2);
        ListaCont.imprime();
        
        //Simples
        ListaCont.get(2);
        ListaCont.set(1,4);
        ListaCont.imprime();

        //Remoção
        ListaCont.removeFinal();
        ListaCont.imprime();
        ListaCont.removeInicio();
        ListaCont.imprime();
        ListaCont.removeInicio2();
        ListaCont.imprime();
        ListaCont.removeK(0);
        ListaCont.imprime();

        //Ex Slides
        int vetor[4] = {0, 1, 2, 3,};
        ListaCont.insereValores(4, vetor);
        ListaCont.imprime();

        cout<< "Numero de nos: "<<ListaCont.numNos()<<endl;
        cout<< "Maior no: "<<ListaCont.buscaMaior(2)<<endl;

        ListaCont.limpar();
        ListaCont.imprime();

        //Outros
        int vetor2[3] = {1, 5, 6};
        ListaCont.inserirVet(4,vetor);
        ListaCont.imprime();
        ListaContigua ListaCont2(7);
        ListaCont2.inserirVet(3,vetor2);
        ListaCont2.imprime();

        ListaContigua *ListaCont3 = new ListaContigua(7);
        ListaCont3 = ListaCont2.copia();
        cout<<"Teste Copia: "<<endl;
        ListaCont2.imprime();
        ListaCont3->imprime();

        ListaContigua *ListaCont4 = new ListaContigua(7);
        ListaCont4 = ListaCont2.copiar(5);
        ListaCont2.imprime();
        ListaCont4->imprime();

        ListaCont2.concatena(ListaCont4);
        ListaCont4->imprime();


    //Lista Dupla

    //Lista Encadeada

    //Lista Ordenada Contígua

    //Lista Ordenada Encadeada
}

int main(){
    testeListas();
    return 0;
}