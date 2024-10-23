#ifndef NOABB_H
#define NOABB_H

#pragma once

class NoABB
{
public:
    NoABB()               {};
    ~NoABB()              {};
    int getInfo()         { return info; };
    NoABB* getEsq()       { return esq; };
    NoABB* getDir()       { return dir; };
    void setInfo(int val) { info = val; };
    void setEsq(NoABB *p) { esq = p; };
    void setDir(NoABB *p) { dir = p; };

private:
    int info;
    NoABB *esq;
    NoABB *dir;
};

#endif