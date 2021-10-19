/*
	Name: 25cmd 
	Author: Aditya Raj
	Date: 21-02-21 22:59
	Description: 
*/

#include<iostream>		
#include<fstream>		
#include<cstdlib>
using namespace std;

int main(int avgc, char* avgv[] )
{
	char ch;
	ifstream infile;
	ofstream outfile;
	infile.open(avgv[1]);
	if(!infile)
	{
		cout<<endl<<"Error 100: Opening infile."<<endl;
		exit(100);
	}
	
	outfile.open(avgv[2]);
	if(!outfile)
	{
		cout<<endl<<"Error 100: Opening outfile."<<endl;
		exit(100);
	}
	
	while(infile.get(ch))			{
		outfile.put(ch);			}
	
	outfile.close();
	if(outfile.fail())
	{
		cout<<endl<<"Error 102: Closing the outfile."<<endl;
		exit(102);
	}
	infile.close();
	if(!infile.fail())
	{
		cout<<endl<<"Error 102: Closing the infile."<<endl;
		exit(102);
	}
	return 1;
}
