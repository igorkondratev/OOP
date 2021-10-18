struct Point{
    float x;
    float y;
};

class Verzera{
private:
   float a;

public:
    Verzera(float valuea = 0){
        a= valuea;
    }
    float Geta();
    void Seta(float valuea);
    float rety(float x);
    void coords(Point *min, Point *max);
    float rets();
    float retv();
    char* frm();

};

