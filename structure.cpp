#include"structure.h"
#include <iostream>
using namespace std;
void Vector::enter() {
    int Max=getMaxSize();
    if(Max==0){
        cout<<"Vector is 0 size\n";
        return;
    }
    char a;
    for(int i =0; i<getMaxSize();i++){
        cout<<"Enter "<<i+1<<" elem:\n";
        do{
        cin>>a;
        if(int(a)!=48&&int(a)!=49){
            cout<<"Error, enter 0 or 1\n";
        }
        } while (int(a)!=48&&int(a)!=49);

        arr[i]=a;
    }
}


void Vector::out() const{
    for(int i = 0;i<getMaxSize();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

Vector Vector::ili(Vector&second) const{
    Vector newvec(0);
   // std::cout << "l\n";
    for (int i = 0; i < 10; i++) {
        //cout << i << "\n";
        newvec.arr[i] = (((int) (arr[i]))-48 || ((int) (second.arr[i]))-48)+'0';

    }
    std::cout << "n\n";
    return newvec;

}

Vector Vector::i(Vector&second) const{
    Vector newvec;
    for(int i = 0;i<getMaxSize();i++){
        newvec.arr[i]=(((int) (arr[i]))-48 && ((int) (second.arr[i]))-48)+'0';
    }
    return newvec;

}

Vector Vector::iskili(Vector&second)const{
    Vector newvec;
    for(int i = 0;i<SZ;i++){
        if(arr[i]==second.arr[i]){
        newvec.arr[i]=0+'0';}
        else{newvec.arr[i]=1+'0';}
    }
    return newvec;

}

Vector Vector::dop()const{
    Vector newvec;
    for(int i = 0;i<SZ;i++){
        if((int)(arr[i])-48==0){
            //cout<<"ell\n";
            newvec.arr[i]=1+'0';
        }
        if((int)(arr[i])-48==1){
           // cout<<"lol\n";
            newvec.arr[i]=0+'0';
        }

    }
    return newvec;
}

Vector Vector::ogr() const{
    Vector newvec(0);
    int last = -1;
    for(int i = 0;i<SZ;i++){
        if((int)(arr[i])-48==1){
            last=i;
        }
    }
    int flag=0;
    for(int i = 0;i<last+1;i++){
        if((int)(arr[i])-48==1){
            flag = i;
            break;
        }
    }
    int j=0;
    cout<<flag<<" "<<last<<"\n";
    for(int i = flag;i<last+1;i++){
        newvec.arr[j]=arr[i];
        j+=1;

    }
   // cout<<"gooooal\n";
    return newvec;
}



