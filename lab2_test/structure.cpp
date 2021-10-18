#include <exception>
#include "structure.h"
#include <stdio.h>
#include <string.h>
#include<stdexcept>
#include <iostream>
#include "math.h"
#define PI 3,1416

float Verzera::Geta()
{ return a;
}



void Verzera::Seta(float valuea)
{
    if (a<0||a*1==0){
        throw std::runtime_error("Invalid value of a, enter a>0\n");}
    a=valuea;
}

float Verzera::rety(float x){
    return a*a*a/(a*a+x*x);
}

float Verzera::rets() {
    return 4*PI*a*a;
}

float Verzera::retv() {
    return PI*PI*a*a*a/2;
}

char* Verzera::frm() {
    char* s1 ="y * (x^2 + a^2) = a^3\n";

    int l = strlen(s1) + 1;
   // delete [] s1;
  //  size_t Size = 20;
    char num[20];
    sprintf(num, "%.2f", a*a);
    l += strlen(num);
    sprintf(num, "%.2f", a*a*a);
    l += strlen(num);
   // delete [] num;
    char *s = new char[l+2];
    //s=NULL;
        sprintf(s, "%s%f%s%f%s", "y * (",a*a," + x^2) = ",a*a*a,"\n");
   // char str;
   // str+="y * (";

    return s;

}

void Verzera::coords(Point *min,Point *max) {
    float x= -a/sqrt(3);
    float y = rety(x);
    min->x=x;
    min->y=y;
    x= a/sqrt(3);
    y = rety(x);
    max->x=x;
    max->y=y;


}