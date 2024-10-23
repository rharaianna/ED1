#ifndef NODUPLO_H
#define NODUPLO_H

#pragma once

class NoDuplo
{
public:
    //Construtor
    NoDuplo();
    ~NoDuplo();

    //Get
    NoDuplo* getProx();
    NoDuplo* getAnt();
    int getInfo();

    //Set
    void setProx(NoDuplo *p);
    void setAnt(NoDuplo *p);
    void setinfo(int val);

private:
    NoDuplo *prox;
    NoDuplo *ant;
    int info;

};

#endif