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

void return_y(Verzera*V){
    std::cout<<"Enter x\n";
    int n;
    float count;
    do {
        n = getNum(count);
        if (n == 1) {
            std::cout << "Error input. Try again." << std::endl;
            std::cin.clear();
            std::cin.ignore();
        }
        } while (n == 1);
    std::cout<<"Your y: "<<V->rety(count)<<std::endl;
}

void return_coords(Verzera*V){
    Point* min = new struct Point;
    Point* max = new struct Point;
    V->coords(min,max);
    std::cout<<"Your coordinates: "<<"( "<<min->x<<" , "<<min->y<<" );";
    std::cout<<" ( "<<max->x<<" , "<<max->y<<" )\n";
    delete min;
    delete max;
}

void set_a(Verzera*V){
    std::cout<<"Enter a\n";
    int n;
    float count;
    do {
        n = getNum(count);
        if (n == 1) {
            std::cout << "Error input. Try again." << std::endl;
            std::cin.clear();
            std::cin.ignore();
        }
    } while (n == 1);
    V->Seta(count);
    std::cout<<"Value of a changed to "<<count<<" correctly\n";
}
void get_a(Verzera*v){
    std::cout<<"Your a: "<<v->Geta()<<std::endl;
}

void return_s(Verzera*V){
    std::cout<<"Your s: "<<V->rets()<<std::endl;
}

void return_v(Verzera*V){
    std::cout<<"Your volume: "<<V->retv()<<std::endl;
}