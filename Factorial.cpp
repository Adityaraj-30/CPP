/*
	Name: Factorial
	Author: Aditya Raj
	Date: 28-12-20 09:10
	Description: Write a function to calculate factorials.
*/
#include<iostream>
using namespace std;
int fac(int num ){
int fac=1;

for (int a=1;a<=num;a++) {
		fac=fac*a;
	}
	return fac;
}
int main() {
	int num;

	cout<<" Enter Number To Find Its Factorial:  ";
	cin>>num;
	
	cout<<"Factorial of Given Number is ="<<fac(num)<<endl;
	return 0;
}
