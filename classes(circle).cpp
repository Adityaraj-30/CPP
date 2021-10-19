#include<iostream>
#define PI 3.14
using namespace std;

class Circle{
	private: double radius;
	
	public: double getRadius()const;
	        double getArea()const;
	        double getPerimeter()const;
	        void setRadius(double value);
};
double Circle::getRadius()const
{
	return radius;
}
double Circle::getArea()const
{
	return (PI*radius*radius);
}
double Circle::getPerimeter()const
{
	return (2*PI*radius);
}
void Circle::setRadius(double value)
{
	radius = value;
}

int main(){
	cout<<"Circle1 :"<<endl;
	Circle c1;
	c1.setRadius(10.0);
	cout<<"Radius :"<<c1.getRadius()<<endl;
	cout<<"Area :"<<c1.getArea()<<endl;
	cout<<"Perimeter :"<<c1.getPerimeter()<<endl;
	return 0;
}

