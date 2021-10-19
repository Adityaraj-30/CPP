/*
	Name: Source code8
	Author: Aditya Raj
	Date: 05-12-20 21:24
	Description:Calculate average of four numbers 
*/

#include<iostream>
using namespace std;

int main(){
	
	double d1, d2, d3, d4, average;
	
	cout<<"Enter 1st number:";
	cin>>d1;
	cout<<"Enter 2nd number:";
	cin>>d2;
	cout<<"Enter 3rd number:";
	cin>>d3;
	cout<<"Enter 4th number:";
	cin>>d4;
	average=(d1+d2+d3+d4)/4;
	cout<<"average of four numbers:"<<average;
	
	return 0;
	
}
