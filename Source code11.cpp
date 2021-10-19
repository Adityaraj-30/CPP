/*
	Name: Source code11
	Author: Aditya Raj
	Date: 05-12-20 22:37
	Description: Convert inches into foot, centimeter, yard,and meter
*/

#include<iostream>
using namespace std;

int main(){
	
	double d1, inch, foot, centimeter, yard, meter;
	cout<<"Enter the number in inch:";
	cin>>d1;
	foot=0.08333*d1;
	centimeter=2.54*d1;
	yard=0.0278*d1;
	meter=0.0254*d1;
	cout<<"The value in foot is:"<<foot<<endl;
	cout<<"The value in centimeter is:"<<centimeter<<endl;
	cout<<"The value in yard is:"<<yard<<endl;
	cout<<"The value in meter is:"<<meter<<endl;
	
	
	
	return 0;
	
	
}
