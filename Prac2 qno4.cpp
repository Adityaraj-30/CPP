

/*
	Name: Pac2 qno4 
	Author: Aditya Raj
	Date: 14-12-20 10:14
	Description:4. Write a function to compute the perimeter and area of a right triangle when given the length of two sides (a and b).          

*/
#include<iostream>
# include <iomanip>
#include<cmath>

using namespace std;
double area (double a, double b);
double perimeter(double x, double y ,double hypo);
int main(){
	double a, b, AREA,PERIMETER, hypo;
	cout<<"Enter the length of perpendicular side:";
	cin>>a;
	cout<<"Enter the length of base side  : ";
	cin>>b;
	hypo = sqrt(a*a +b*b);
	cout<<"Hence the length of hypo side is:"<<hypo<<endl;
	
	AREA=area(a , b);
	cout<<"Area of triang is:"<<AREA<<endl;
	PERIMETER=perimeter(a,b,hypo);
	cout<<"Perimeter of triangle is:"<<PERIMETER;
	
	
	return 0;
}
double area(double A, double B){
	return(A*B)/2;
}

double perimeter(double X,double Y,double HYPO){
		return(X+Y+HYPO);
	}

