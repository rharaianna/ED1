//Nós
#include "Headers/NoSimples.h"
#include "Headers/NoDuplo.h"
#include "Headers/NoABB.h"
//Listas
#include "Headers/ListaContigua.h"
#include "Headers/ListaDupla.h"
#include "Headers/ListaEncadeada.h"
#include "Headers/ListaOrdenadaContigua.h"
#include "Headers/ListaOrdenadaEncadeada.h"
//Filas
#include "Headers/FilaContigua.h"
#include "Headers/FilaContiguaCircular.h"
#include "Headers/FilaEncadeada.h"
//Pilhas
#include "Headers/PilhaContigua.h"
#include "Headers/PilhaEncadeada.h"
//Arvore
#include "Headers/ABB.h"

//Geral
#include <iostream>
using namespace std;


void testeListas(){
    //ListaDupla ListaDup;
    //ListaEncadeada ListaEncad;
    //ListaOrdenadaEncadeada ListaOrdEnc;
    //Lista Contigua
    ListaOrdenadaContigua ListaOrdCont(4);
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
        int vetor[7] = {0, 1, 2, 3, 4, 5, 6};
        ListaCont.insereValores(7, vetor);
        ListaCont.imprime();

        cout<< "Número de nós: "<<ListaCont.numNos()<<endl;
        cout<< "Maior nó: "<<ListaCont.buscaMaior(5)<<endl;

        ListaCont.limpar();
        ListaCont.imprime();

        //Outros
        int vetor2[7] = {1, 5, 6, 7, 8, 9, 10};
        ListaCont.inserirVet(7,vetor);
        ListaContigua ListaCont2(7);
        ListaCont2.inserirVet(7,vetor2);
        ListaCont.imprime();
        ListaCont2.imprime();

        ListaContigua *ListaCont3 = new ListaContigua(7);
        ListaCont3 = ListaCont2.copia();
        ListaCont3->imprime();

        ListaContigua *ListaCont4 = new ListaContigua(7);
        ListaCont4 = ListaCont3->copiar(7);
        ListaCont4->imprime();
        ListaCont3->imprime();

        ListaCont4->concatena(ListaCont3);
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