/*
	Name: Source code 5 
	Author: Aditya Raj
	Date: 04-12-20 20:33
	Description:WAP to print equivalent ASCII number of all permissible escape characters 
*/


#include<iostream>
using namespace std;

int main(){
	cout<<"ASCII code of escape characters:"<<endl;
	cout<<"\\0:" <<int('\0')<<endl;
	cout<<"\\a:"<<int('\a') <<endl;
	cout<<"\\b:" <<int('\b')<<endl;
	cout<<"\\t:" <<int('\t')<<endl;
	cout<<"\\n:" <<int('\n')<<endl;
	cout<<"\\v:" <<int('\v')<<endl;
	cout<<"\\f:" <<int('\f')<<endl;
	cout<<"\\r:" <<int('\r')<<endl;
	cout<<"\\':" <<int('(\')')<<endl;
	cout<<"\\\:" <<int('\\')<<endl;

	return 0;
	
}
