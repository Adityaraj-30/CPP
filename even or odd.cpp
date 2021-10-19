/*
	Name: even or odd
	Author: Aditya Raj
	Date: 26-12-20 17:41
	Description:6. Write a program to check whether a number is even or odd. 
*/
#include<iostream>
#include<iomanip>
using namespace std;
int even_odd(int n);
int main(){
	int n, type;
	cout<<"Enter any number to check even or odd :"<<endl;
	cin>>n;
	type=even_odd( n);
	return 0;
	
}

int even_odd(int n){
	int a;
	a=n%2;
	if (a==0){
		cout<<"Even number "<<endl;
	}
	else{
		cout<<"Odd number "<<endl;
	}
	return a;
}
