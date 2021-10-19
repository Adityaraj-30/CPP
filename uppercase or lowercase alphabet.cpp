/*
	Name:  uppercase or lowercase alphabet.
	Author: Aditya Raj
	Date: 25-12-20 21:35
	Description: Write a program to check whether a character is uppercase or lowercase alphabet.

*/


#include<iostream>
#include<iomanip>
using namespace std;

char upper_lower_ch(char ch){
	if (ch>=97 && ch<=122){
		cout<< "Lowercase " ;
	
	}
	else if (ch>=65 && ch<=90 ) {
	
		cout<<" Uppercase "<<endl ;
	}
	else{
		cout<<"Not a character "<<endl;
	}
	return ch;
}
int main(){
	char ch,type;
	cout<<"Enter any character:"<<endl;
	cin>>ch;
	type=upper_lower_ch( ch);

	return 0;
}

	

	


	
		


