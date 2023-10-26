#include <iostream>
using namespace std;

struct Wektor2D {
    private:

    double x;
    double y;

    public:
    Wektor2D() {
        x=0;
        y=0;
    }
    Wektor2D(double a, double b) {
        x=a;
        y=b;
        //cout<<'\t'<<x<<','<<y<<'\n';
    }
    void print() {cout<<'\t'<<x<<','<<y<<'\n' ;}
    void setX(double a) {x=a;}
    void setY(double b) {y=b;}
    double norm() {return sqrt(x*x+y*y);}
    double getX() {return x;}
    double getY() {return y;}
};


Wektor2D operator+(Wektor2D v1, Wektor2D v2) 
{   
    double xw=v1.getX()+v2.getX();
    double yw=v1.getY()+v2.getY();
    return Wektor2D(xw,yw);
}
double operator*(Wektor2D v1, Wektor2D v2) 
{   
    double xw=v1.getX()*v2.getX();
    double yw=v1.getY()*v2.getY();
    return xw+yw;   
}
