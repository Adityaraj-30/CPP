/*
	Name: alphabet, digit or special character
	Author: Aditya Raj
	Date: 25-12-20 22:20
	Description: Write a program to input any character and check whether it is alphabet, digit or special character.

*/


#include<iostream>
#include<iomanip>
using namespace std;
char check_ch(char ch);
int main(){
	char ch, type;
	cout<<"Enter any alphabet :"<<endl;
	cin>>ch;
	type=check_ch( ch);
	return 0;
	
}

char check_ch(char ch){

	
	if((ch>=97&& ch<=122) || (ch>=65&& ch<=90)){
		cout<< "alphabet  ";
	}
	else if (ch>=48 && ch<=57){
		cout<< "digit is ";
	}
	else {
		cout<< "special character ";
	}
	
	return ch;
	
}




