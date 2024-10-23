#ifndef NOSIMPLES_H
#define NOSIMPLES_H

#pragma once

class NoSimples
{
public:
    NoSimples();
    NoSimples(int val, NoSimples *p);
    ~NoSimples();

    int getInfo();
    NoSimples* getProx();

    void setInfo(int val);
    void setProx(NoSimples *p);

private:
    int info;
    NoSimples *prox;
};

#endif