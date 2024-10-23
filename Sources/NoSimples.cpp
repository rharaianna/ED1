#include "../Headers/NoSimples.h"

NoSimples::NoSimples() { }

NoSimples::NoSimples(int val, NoSimples *p)
{
    info = val;
    prox = p;
}

NoSimples::~NoSimples()
{
    
}

int NoSimples::getInfo(){
    return info;
}
NoSimples* NoSimples::getProx(){
    return prox;
}

void NoSimples::setInfo(int val){
    info = val;
}

void NoSimples::setProx(NoSimples *p){
    prox = p;
}