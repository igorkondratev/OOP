struct Point{
    float x;
    float y;
};

class Verzera{
private:
   float a;

public:
    Verzera(float valuea=0.0){
        a= valuea;
    }
    float Geta() const {return a;}
    void Seta(float valuea);
    float rety(float x) const {
        return a*a*a/(a*a+x*x);
    }
    void coords(Point *min, Point *max);
    float rets() ;
    float retv() ;
    char* frm() ;
};
