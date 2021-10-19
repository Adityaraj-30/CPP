/*
	Name: Source code6 
	Author: Aditya Raj
	Date: 05-12-20 20:38
	Description:Calculate and print quotient and remainder of two numbers entered by the user 
*/

#include<iostream>
using namespace std;

int main(){
	int dividend, divisor, quotient, remainder;
	cout<<"Enter the value of dividend:";
	cin>>dividend;
	cout<<"Enter the value of divisor:";
	cin>>divisor;
	remainder=dividend%divisor;
	quotient= dividend/divisor;
	cout<<"remainder is:"<< remainder<<endl;
	cout<<"quotient is:"<<quotient<<endl;
	
	
	
	return 0;
	
}
