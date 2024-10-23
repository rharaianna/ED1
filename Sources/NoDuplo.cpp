#include "../Headers/NoDuplo.h"
#include <iostream>

using namespace std;

//Construtor
NoDuplo::NoDuplo()
{ }

NoDuplo::~NoDuplo()
{ }

//Get
NoDuplo* NoDuplo::getProx(){
    return prox;
}
NoDuplo* NoDuplo::getAnt(){
    return ant;
}
int NoDuplo::getInfo(){
    return info;
}

//Set
void NoDuplo::setProx(NoDuplo *p){
    prox = p;
}
void NoDuplo::setAnt(NoDuplo *p){
    ant=p;
}
void NoDuplo::setinfo(int val){
    info = val;
}