/*
	Name: Source code12
	Author: Aditya Raj
	Date: 05-12-20 22:06
	Description:Calculate the area and circumference of a circle for a given radius
*/

#include<iostream>
using namespace std;
;
int main(){
	double Pi=3.14, r1, Area, Circumference;
	cout<<"Enter the radius of the circle:";
	cin>>r1;
	Area=Pi*r1*r1;
	Circumference=2*Pi*r1;
	cout<<"Area of the circle is:"<<Area<<endl;
	cout<<"Circumference of the circle is:"<<Circumference;
	
	return 0;
	
}
