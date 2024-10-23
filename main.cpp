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
        ListaContigua ListaCont(4);
        
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





    //Lista Dupla

    //Lista Encadeada

    //Lista Ordenada Contígua

    //Lista Ordenada Encadeada
}

