#include<iostream>
using namespace std;

class Polygon
{
    protected:
        double area;
        double perimeter;
    virtual void calArea()=0;
    virtual void calPeri()=0;
    public:
        void printArea(){
            cout<<"\nArea of Polygon: "<<area;
        }
        void printPeri(){
            cout<<"\nPerimeter of Polygon: "<<perimeter;
        }
       
};
class Triangle:public Polygon{
    double sideA, sideB, sideC;
    void calArea(){
        area=45.5;
    }
    void calPeri(){
        perimeter=20.3;
    }

};
class 