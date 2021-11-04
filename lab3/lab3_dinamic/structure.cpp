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
   // cout<<"lol"<<getMaxSize()<<"\n";
    for(int i = 0;i<getMaxSize();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

Vector Vector::ili(Vector&second) const{
    Vector newvec(getMaxSize());
   // std::cout << "l\n";
    for (int i = 0; i < 10; i++) {
        //cout << i << "\n";
        newvec.arr[i] = (((int) (arr[i]))-48 || ((int) (second.arr[i]))-48)+'0';

    }
   // std::cout << "n\n";
    return newvec;

}

Vector Vector::i(Vector&second) const{
    Vector newvec(getMaxSize());
    for(int i = 0;i<getMaxSize();i++){
        newvec.arr[i]=(((int) (arr[i]))-48 && ((int) (second.arr[i]))-48)+'0';
    }
    return newvec;

}

Vector Vector::iskili(Vector&second)const{
    Vector newvec(getMaxSize());
    for(int i = 0;i<SZ;i++){
        if(arr[i]==second.arr[i]){
        newvec.arr[i]=0+'0';}
        else{newvec.arr[i]=1+'0';}
    }
    return newvec;

}

Vector Vector::dop()const{
    Vector newvec(getMaxSize());
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
    //Vector newvec(0);
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
    Vector newvec(last+1-flag);
    int j=0;
    cout<<flag<<" "<<last<<"\n";
    for(int i = flag;i<last+1;i++){
        newvec.arr[j]=arr[i];
        j+=1;

    }
   // cout<<"gooooal\n";
    return newvec;
}

Vector & Vector::operator +=(const Vector &second)
{
   // Vector newvec(0);
    // std::cout << "l\n";
    for (int i = 0; i < getMaxSize(); i++) {
        //cout << i << "\n";
        arr[i] = (((int) (arr[i]))-48 || ((int) (second.arr[i]))-48)+'0';

    }
    // std::cout << "n\n";

    return *this;
}

Vector & Vector::operator +(const Vector &second)
{
    for(int i = 0;i<getMaxSize();i++){
        arr[i]=(((int) (arr[i]))-48 && ((int) (second.arr[i]))-48)+'0';
    }

    return *this;
}

Vector & Vector::operator -=(const Vector &second)
{
    for(int i = 0;i<SZ;i++){
        if(arr[i]==second.arr[i]){
            arr[i]=0+'0';}
        else{arr[i]=1+'0';}
    }

    return *this;
}

Vector & Vector::operator ++()
{
    for(int i = 0;i<SZ;i++){
        if((int)(arr[i])-48==0){
            arr[i]=1+'0';
        }
        else {if((int)(arr[i])-48==1){
            arr[i]=0+'0';
        }}

    }

    return *this;
}

Vector & Vector::operator --()
{
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
    for(int i = flag;i<last+1;i++){
        arr[j]=arr[i];
        j+=1;

    }
    for(int i = j;i<getMaxSize();i++){
        arr[i]=0;


    }

    return *this;
}

std::ostream & operator <<(std::ostream &s, const Vector &st)
{
   // cout<<st.SZ<<"\n";
    for(int i = 0;i<st.getMaxSize();i++){
        s<<st.arr[i]<<" ";
    }
    s << std::endl;
    return s;
}

std::istream& operator>> (std::istream &in, Vector &st){
    int Max=st.getMaxSize();
    if(Max==0){
        cout<<"Vector is 0 size\n";
    }
    char a;
    for(int i =0; i<st.getMaxSize();i++){
        cout<<"Enter "<<i+1<<" elem:\n";
        do{
            in>>a;
            if(int(a)!=48&&int(a)!=49){
                cout<<"Error, enter 0 or 1\n";
            }
        } while (int(a)!=48&&int(a)!=49);

        st.arr[i]=a;
    }
}

void Vector::free(){
    delete[] arr;
}



