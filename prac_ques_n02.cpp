/*
	Name:prac_ques_n02
	Author: Aditya Raj
	Date: 09-03-21 10:09
	Description:Write a program in C++ that defines a parameterized function appendSymbol()that accepts two arguments- a reference to a text file File1 and a character symbol. The character is appended at the end of every word and displayed on the console. Define function main()and invoke the above function to show its working. 
*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void appendSymbol(ifstream &File1,char symbol)
{
	string word;
	if(!File1)
	    {
	    	cout<<"\nError 100: Opening File "<<endl;
	    	exit(100);
		}
	else{
	
        cout<<"\nContent of file after append :\n";
		while(File1>>word)
		{
			cout<<word<<symbol;
		}
		
       }
    File1.close ();
    if(File1.fail())
    {
    	cout<<"Error 102: Closing file";
    	exit(102);
	}
    
	return ;
}

int main()
{
	char symbol;
	cout<<"\nEnter the symbol you want to append at end of every word :";
	cin>> symbol;
	ifstream File1;
	File1.open("story.txt");
	appendSymbol(File1, symbol);
	return 0;
}
