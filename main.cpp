//Nós
#include "NoSimples.h"
#include "NoDuplo.h"
#include "NoABB.h"
//Listas
#include "ListaContigua.h"
#include "ListaDupla.h"
#include "ListaEncadeada.h"
#include "ListaOrdenadaContigua.h"
#include "ListaOrdenadaEncadeada.h"
//Filas
#include "FilaContigua.h"
#include "FilaContiguaCircular.h"
#include "FilaEncadeada.h"
//Pilhas
#include "PilhaContigua.h"
#include "PilhaEncadeada.h"
//Arvore
#include "ABB.h"

//Geral
#include <iostream>
using namespace std;


void testeListas(){
    ListaDupla ListaDup();
    ListaEncadeada ListaEncad();
    ListaOrdenadaContigua ListaOrdCont(4);
    ListaOrdenadaEncadeada ListaOrdEnc();
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







    //Lista Dupla

    //Lista Encadeada

    //Lista Ordenada Contígua

    //Lista Ordenada Encadeada
}

