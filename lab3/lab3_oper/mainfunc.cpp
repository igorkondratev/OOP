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
    class Vector Newvec;
    class Vector res;
    Newvec.enter();
    res = V;
    //res.out();
    V+=Newvec;
    std::cout<<"Your vector:\n";
   // V.out();
    std::cout<<V;
    V=res;
}

void retand(Vector&V){
    class Vector Newvec;
    class Vector res;
    Newvec.enter();
   // res = V;
    //res.out();
    res = V+Newvec;
    std::cout<<"Your vector:\n";
    //V.out();
    std::cout<<res;
    //V=res;
}

void retiskili(Vector&V){
    class Vector Newvec;
    class Vector res;
    Newvec.enter();
    res = V;
    V-=Newvec;
    std::cout<<"Your vector:\n";
   // V.out();
    std::cout<<V;
    V=res;
}

void dop(Vector&V){
    class Vector res;
    res = V;
    ++V;
    std::cout<<"Your vector:\n";
    //V.out();
    std::cout<<V;
    V=res;

}

void ogr(Vector&V){
    class Vector res;
    res = V;
    --V;
    std::cout<<"Your vector:\n";
   // V.out();
    std::cout<<V;
    V=res;

}
