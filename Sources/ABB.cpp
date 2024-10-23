#include "../Headers/ABB.h"

#include <iostream>
#include <sstream>
using namespace std;


ABB::ABB()
{
    raiz=NULL;
}

ABB::~ABB()
{
    raiz= libera(raiz);
}

NoABB * ABB::libera(NoABB*p){
    
}
int ABB::getRaiz(){
    return raiz->getInfo();
}
bool ABB::vazia(){
    return raiz==NULL;
}

bool ABB::busca(int val){
    return(auxBusca(raiz,val));
}

bool ABB::auxBusca(NoABB*p, int val){
    if(p==NULL)
        return false;
    else if(val = p->getInfo())
        return true;
    else if(val<p->getInfo())
        return auxBusca(p->getEsq(),val);
    else
        return auxBusca(p->getDir(),val);
    
}

void ABB::insere(int val)
{
    raiz = auxInsere(raiz, val);
}

NoABB* ABB::auxInsere(NoABB *p, int val){
    if(p==NULL){
        p= new NoABB();
        p->setInfo(val);
        p->setDir(NULL);
        p->setEsq(NULL);
    }
    else if (val < p->getInfo()){
        p->setEsq(auxInsere(p->getEsq(),val));
    }
    else{
        p->setDir(auxInsere(p->getDir(),val));
    }
    return p;
}

int ABB::min(){
    auxMin(raiz);
}

int ABB::auxMin(NoABB*p){
    if(p!= NULL){
        if(p->getEsq() == NULL)
            return p->getInfo();
        else
            return auxMin(p->getEsq());
    }
}

void ABB::remove(int val){
    raiz = auxRemove(raiz,val);
}

NoABB * ABB::auxRemove(NoABB*p, int val){
    if(p == NULL){
        cout << "Noh " << val << " inexistente" << endl;
        return NULL;
    }
    else{
        if (val< p->getInfo())
            p->setEsq(auxRemove(p->getEsq(),val));
        else if (val> p->getInfo())
            p->setDir(auxRemove(p->getDir(),val));
        else{ //val == p->getInfo()
            if(p->getDir()==NULL && p->getEsq()==NULL){
                //Folha
                delete p;
                return NULL;
            } 
            else if(p->getDir()==NULL || p->getEsq()==NULL){
                //1 filho
                NoABB* aux = p->getEsq();
                if(aux==NULL)
                    aux = p->getDir();
                delete p;
                return aux;
            }
            else{
                //2 filhos
                NoABB * aux = p->getDir();
                while(aux->getEsq()!=NULL)
                    aux->getEsq();
                p->setInfo(aux->getInfo());
                aux->setInfo(val);
                p->setDir(auxRemove(p->getDir(),val));
            }
        } 
    }
}