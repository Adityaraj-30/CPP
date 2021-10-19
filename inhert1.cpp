#include<iostream>
using namespace std;
class Polygon
{
    public:
        double area;
        double perimeter;
        void printArea();
        void printPeri();

};

class Triangle:public Polygon
{
    double sideA, sideB, sideC;
    void calArea();
    void calPeri();
    public:Triangle(double a, double b, double c);
};
Triangle::Triangle(double a, double b, double c){
        if((a+b<=c)||(a+c<=b)||(b+c<=a))
        {
            cout<<"Invalid triangle\n";
            exit(100);
        }
        sideA=a; sideB=b;sideC=c;
        calArea();
        calPeri();
}

int main(){
    Triangle T1(3,4,5);
    T1.printArea();
    T1.printPeri();

    return 0;
}
