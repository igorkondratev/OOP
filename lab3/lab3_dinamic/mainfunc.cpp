#include <cstdio>
#include <iostream>
#include "structure.h"


template<class T>
int getNum(T &n)
{
    std::cin >> n;
    if (!std::cin.good()) return 1;
    return 0;
}

int dialog(const char* msgs[], int N)
{
    const char* errmsgs = "";
    int rc, i;
    do
    {
        puts(errmsgs);
        errmsgs = "Error, repeate!";
        for (i = 0; i < N; ++i)					// Вывод списка альтернатив
        {
            puts(msgs[i]);
        }
        printf("Choose:");
    } while (getNum(rc) < 0 || rc >= N);
    return rc;
}

void retincor(Vector&V){
    class Vector Newvec(V.getMaxSize());
    class Vector res(V.getMaxSize());
    res.free();
    res = V;
    Newvec.enter();

    V+=Newvec;
    std::cout<<"Your vector:\n";
    std::cout<<V;
    Newvec.free();
    V=res;
   // res.free();
}

void retand(Vector&V){
    class Vector Newvec(V.getMaxSize());
    class Vector res(V.getMaxSize());
    res.free();

    Newvec.enter();
    res = V+Newvec;
    std::cout<<"Your vector:\n";
    res.out();
    Newvec.free();
    //res.free();
}

void retiskili(Vector&V){
    class Vector Newvec(V.getMaxSize());
    class Vector res(V.getMaxSize());
    res.free();
    res = V;
    Newvec.enter();

    V-=Newvec;
    std::cout<<"Your vector:\n";
    std::cout<<V;
    Newvec.free();
    V=res;
}

void dop(Vector&V){
    class Vector res(V.getMaxSize());
    res.free();
    res = V;
    ++V;
    //res = V.dop();
    std::cout<<"Your vector:\n";
    std::cout<<V;
    V=res;
    //res.free();

}

void ogr(Vector&V){
    class Vector res(V.getMaxSize());
    res.free();
    res = V;
    --V;
    //res = V.dop();
    std::cout<<"Your vector:\n";
    std::cout<<V;
    V=res;

}
