/*
	Name: 21dec
	Author: 
	Date: 21-12-20 09:20
	Description: Write a program to input any character and check whether it is alphabet, digit or special character.

*/


#include<iostream>
using namespace std;

int isalphabet(char ch);
int isdigit(char ch);
int isspecial(char ch);
void print(int);

int main(){
	int result=0;
	char ch;
	cout<<"Enter any character:"<<endl;
	cin>>ch;
	if(isalphabet(ch));
	else if(isdigit(ch));
	else if(isspecial(ch));
	print (result);
	
	
	return 0;
int isalphabet(char ch){
		if((ch>=97&& ch<=122) || (ch>=65&& ch<=91))
		return 1;
	else 
	    return 0;	
	
}
int isdigit(char ch){
	if (ch>=48 && ch<=57)
	    return 1;
	else 
	    return 0;    
}
int isspecial(char ch){
	else 
	   return 1;
}

	
}
