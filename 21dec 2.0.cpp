/*
	Name: 21dec
	Author: 
	Date: 21-12-20 09:20
	Description: Write a program to input any character and check whether it is alphabet, digit or special character.

*/


#include<iostream>
using namespace std;

int main(){
    char ch;
		cout<<"Enter any character:"<<endl;
	    cin>>ch;
	
    switch (ch){
    	case ((ch>=97&& ch<=122) || (ch>=65&& ch<=91)):
    		cout<<"alphabet is "<<ch;
			break;
    		
    	case (ch>=48 && ch<=57):
		    cout<<	"digit is "<<ch;
		    break;
		
		default:
		cout<<"special character "<<ch;
		    break;     
	}


	
	return 0;
	
}
