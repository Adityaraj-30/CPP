/*
	Name:  vowel or consonant
	Author: Aditya Raj
	Date: 26-12-20 17:30
	Description: 	9. Write a program to input any alphabet and check whether it is vowel or consonant.
*/

#include<iostream>
#include<iomanip>
using namespace std;
char vowel_consonant(char ch);
int main(){
	char ch, type;
	cout<<"Enter any alphabet in lowercase to check vowel or consonant :"<<endl;
	cin>>ch;
	type= vowel_consonant( ch);
	return 0;
	
}

char vowel_consonant(char ch){
	if(ch=97){
		cout<<"Vowel "<<endl;
	}
	else if(ch=101){
		cout<<"Vowel "<<endl;
	}
	else if(ch=105){
		cout<<"Vowel "<<endl;
	}
	else if(ch=111){
		cout<<"Vowel "<<endl;
	}
	else if(ch=117){
		cout<<"Vowel "<<endl;
	}
	else{
		cout<<"Consonant "<<endl;
	}
	return ch;
}
