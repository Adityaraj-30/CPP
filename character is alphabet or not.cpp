/*
	Name: character is alphabet or not
	Author: Aditya Raj
	Date: 26-12-20 17:41
	Description:8. Write a program to check whether a character is alphabet or not
*/
#include<iostream>
#include<iomanip>
using namespace std;
char alphabet_not(char ch);
int main(){
	char ch, type;
	cout<<"Enter any character :"<<endl;
	cin>>ch;
	type=alphabet_not( ch);
	return 0;
	
}

char alphabet_not(char ch){

	
	if((ch>=97&& ch<=122) || (ch>=65&& ch<=90)){
		cout<< "alphabet  "<<endl;
    }
    else{
    	cout<<"Not a alphabet "<<endl;
	}
	return ch;
}
