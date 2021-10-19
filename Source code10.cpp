/*
	Name: Source code10 
	Author: Aditya Raj
	Date: 05-12-20 23:48
	Description:WAP to change a temperature reading from Fahrenheit to Celsius 
*/

#include<iostream>
using namespace std;

int main(){
	double d1, C;
	cout<<"Temperature in Fahrenheit is:";
	cin>>d1;
	C=(d1-32)*5/9;
	cout<<"Hence temperature in Celsius is:"<<C;
	
	return 0;
	
}
