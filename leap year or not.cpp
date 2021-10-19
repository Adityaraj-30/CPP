/*
	Name: leap year or not
	Author: Aditya Raj
	Date: 25-12-20 21:06
	Description: Write a program to check whether a year is leap year or not.
*/
#include<iostream>
#include<iomanip>

using namespace std;
int leap_not(int n);
int main(){
	int n, type;
	cout<<"Enter a year you want to know leap or not :"<<endl;
	cin>>n;
	type=leap_not( n);
	return 0;
}
int leap_not(int n){
    int a;	
	a=n%4;
	
	if (a==0){
		cout<< "leap year"<<endl;
	}
	else{
		cout<< " is not leap year ";
	}
	
    return a;
}


