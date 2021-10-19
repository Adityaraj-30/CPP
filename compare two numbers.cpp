/*
	Name: compare two numbers
	Author: Aditya Raj
	Date: 26-12-20 18:00
	Description: 5. WAP to compare two numbers.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int comp_no(int n1, int n2){
	if(n1>n2){
		cout<<"First number is greater than second "<<endl;
	}
	else if(n1<n2){
		cout<<"Second number is greater than first "<<endl;
	}
	else{
		cout<<"Both number are equal "<<endl;
	}
	return n1,n2;
}
int main(){
	int n1,n2, type;
	cout<<"Enter first number number:"<<endl;
	cin>>n1;
	cout<<"Enter second number number:"<<endl;
	cin>>n2;
	type=comp_no(n1,n2);
	return 0;
}


