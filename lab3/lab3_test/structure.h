#ifdef LAB_3_CLASS_H
#define LAB_3_CLASS_H

#include<stdexcept>

class Vector{
private:
   int SZ ;
   char* arr;


public:
    void enter();
    Vector(){
        SZ = 10;
        arr = new char[SZ];
        for(int i = 0;i<SZ;i++){
            arr[i]=(char)(((int)'0')+0);
        }

    };
    Vector(char *str){
        int size;

            for (size = 0; str[size] != '\0'; size++);
        //std::cout<<size<<"\n";
        SZ = size;
        arr = new char[SZ];

        for(int i = 0;i<SZ;i++){
            arr[i]=str[i];
        }
    }
    Vector(int n){
        SZ = n;
        arr = new char[SZ];


        for(int i = 0;i<n;i++){
            arr[i]=(char)(((int)'0')+0);
        }

    }

    void out() const;
    int getMaxSize() const { return SZ; }
    char get(int n){return arr[n];}
    Vector ili(Vector & second) const;
    Vector i(Vector & second) const;
    Vector iskili(Vector & second) const;
    Vector dop() const;
    Vector ogr() const;
    Vector & operator +=(const Vector &);
    Vector & operator +(const Vector &);
    Vector & operator -=(const Vector &);
    Vector & operator ++();
    Vector & operator --();

    char* operator[] (const int index)
    {
        return &arr[index];
    }
    friend std::ostream & operator <<(std::ostream &, const Vector &);
    ~Vector()= default;



};

#endif
