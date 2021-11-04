#include<stdexcept>

class Vector{
private:
   const static int SZ = 10;
   char arr[SZ];


public:
    void enter();
    Vector():arr{}{};
    Vector(char *str):arr{}{
        for(int i = 0;i<SZ;i++){
            arr[i]=str[i];
        }
    }
    Vector(int n):arr{}{

        for(int i = 0;i<n;i++){
            arr[i]=(char)(((int)'0')+1);
        }
        for(int i = n ; i<SZ;i++){
            arr[i]=(char)(((int)'0')+0);
        }
    }

    void out() const;
    int getMaxSize() const { return SZ; }
    Vector ili(Vector & second) const;
    Vector i(Vector & second) const;
    Vector iskili(Vector & second) const;
    Vector dop() const;
    Vector ogr() const;
    Vector & operator +=(const Vector &);
    Vector   operator +(const Vector &);
    Vector & operator -=(const Vector &);
    Vector & operator ++();
    Vector & operator --();
    Vector & operator ++(int);
    char* operator[] (const int index)
    {
        return &arr[index];
    }
    friend std::ostream & operator <<(std::ostream &, const Vector &);
    friend std::istream& operator>> (std::istream &in, Vector &st);
    ~Vector()= default;


};
//перегрузить поток ввода индексацию(a[i]=...) постфиксный инкремент