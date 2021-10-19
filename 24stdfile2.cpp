/*
	Name: 24stdfile2 
	Author: Aditya Raj
	Date: 21-02-21 23:00
	Description: 
*/

#include<iostream>			
#include<fstream>		
#include<cstring>

using namespace std;

int main()
{
	string rollno, name, clas, year, total_marks;
	
	ifstream infile;
	
	infile.open("copytext.txt");
	if(!infile)
	{
		cout<<endl<<"Error 100: Opening a file. \a"<<endl;
		exit(100);
	}
	
	cout<<"RollNo  Name  Total Marks"<<endl;
	
	while(infile)
	{
		getline(infile,rollno,'\t');
		getline(infile,name,'\t');
		getline(infile,clas,'\t');
		getline(infile,year,'\t');
		getline(infile,total_marks,'\t');
		cout<<rollno<<"\t"<<name<<"\t"<<total_marks<<endl;
	}
	
	infile.close();
	if(!infile.fail())
	{
		cout<<endl<<"Error 102: Closing the file. \a"<<endl;
		exit(102);
	}
	return 1;
}
