//#include<stdexcept>
#ifdef LAB_3_CLASS_H
#define LAB_3_CLASS_H
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



};
#endif
