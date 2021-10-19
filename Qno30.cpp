/*
	Name:ch3 Qno30
	Author: Aditya Raj
	Date: 13-12-20 12:14
	Description: Print right digit of a given float
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float f1;
	int n1;
	cout<<"Enter a number";
    cin>>f1;

	 n1=static_cast <int>(f1)%10;
	cout<<n1;
	
	return 0;
	
}
