/*
	Name: 23STDFILE
	Author: Aditya Raj
	Date: 21-02-21 22:45
	Description: 
*/

#include<iostream>			
#include<fstream>		
#include<cstring>
using namespace std;

#define SIZE 10

class Student
{
	private:
		int roll_no;
		char name[20];
		int class_;
		int year;
		float total_marks;
	public:
		Student();
		void store();
		void print_details();
		void writeOnFile(char []);
};

Student::Student()
{
	roll_no=0;
	strcpy(name, "Null");
	class_=0;
	year=0;
	total_marks=0;
}

void Student::store()
{
	cout<<endl<<"Enter Roll No.: ";
	cin>>roll_no;
	cout<<endl<<"Enter Name: ";
	cin>>name;
	cout<<endl<<"Enter Class: ";
	cin>>class_;
	cout<<endl<<"Enter Year: ";
	cin>>year;
	cout<<endl<<"Enter Total Marks: ";
	cin>>total_marks;
}

void Student::print_details()
{
	cout<<endl<<"Student Details: ";
	cout<<endl<<"Roll No.: "<<roll_no;
	cout<<endl<<"Name: "<<name;
	cout<<endl<<"Class: "<<class_;
	cout<<endl<<"Year: "<<year;
	cout<<endl<<"Total Marks: "<<total_marks;
}

void Student::writeOnFile(char fileName[30])
{
	ofstream outfile;
	outfile.open(fileName, ios::app);
	if(!outfile)
	{
		cout<<endl<<"Error 100: Opening outfile."<<endl;
		exit(100);
	}
	cout<<"Roll_No"<<"\t"<<"Name"<<"\t"<<"Class"<<"\t"<<"Year"<<"\t"<<"Total_Marks"<<endl;
	outfile<<roll_no<<"\t";
    outfile<<name<<"\t";
    outfile<<class_<<"\t";
    outfile<<year<<"\t";
    outfile<<total_marks<<"\t";
	outfile<<endl;

	cout<<endl<<"Written.";

	outfile.close();
	if(outfile.fail())
	{
		cout<<endl<<"Error 102: Closing the outfile."<<endl;
		exit(102);
	}
	
}

int main()
{

	Student stud[SIZE];
	
	for(int i=0; i<SIZE; i++)
	{
		stud[i].store();
	}
	
	for(int i=0; i<SIZE; i++)
	{
		stud[i].writeOnFile("copytext.txt");
	}
	
	
	return 0;
}
