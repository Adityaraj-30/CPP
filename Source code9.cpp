/*
	Name: Source code9 
	Author: Aditya Raj
	Date: 05-12-20 23:59
	Description: WAP that prompts a user to enter an angle in radiun and convert it into degree
*/

#include<iostream>
using namespace std;

int main(){
	double r1, Pi=3.14,degree;
	cout<<"Enter angle in radian:";
	cin>>r1;
	degree=r1*180/Pi;
	cout<<"The value in degree is:"<<degree;
	
	return 0;
}
