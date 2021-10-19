/*
	Name: stdfile1 
	Author: Aditya Raj
	Date: 04-02-21 21:03
	Description: Create a class student containing fields for Roll no,Name, class, Year,Total Marks.Create 10 student and store them in a file. 
*/

#include <iostream>
#include <fstream>
#define MAX 10
using namespace std;
 
class Student
{
    private:
        int RollNo;
		char Name[100];
        int Class;
        int Year;
        int Total;
    public:
        void getDetails();						//member function to get student's details
        void print();						//member function to print student's details
};
 

void Student::getDetails(){  
    
    cout << "Enter roll number: ";
    cin >> RollNo;
	cout << "Enter name: " ;
    cin >> Name;
    cout<<"Enter class of student: ";
    cin>>Class;
    cout<<"Enter student year: ";
    cin>>Year;
    cout << "Enter total marks outof 500: ";
    cin >> Total;
}

void Student::print(){
    ofstream record;
    record.open("filename1.txt",ios::app);
    if(!record)
    {
        cout<<"error100 in opening file";
        exit(100);
    }
    record<<"RollNo"<<"\t";
    record<<"Name"<<"\t";
    record<<"Class"<<"\t";
    record<<"Year"<<"\t";
    record<<"Marks"<<endl;
    
    record<<RollNo<<"\t"<<"\t";
    record<<Name<<"\t"<<"\t";
    record<<Class<<"\t"<<"\t";
    record<<Year<<"\t"<<"\t";
    record<<Total<<"\t";
    record<<endl;
    record.close();
    cout<<"!!!Done!!!";
   
}
  
int main(){
	Student std[MAX];       //array of objects creation
    int n,loop;
	cout << "Enter total number of students: ";
    cin >> n;
    
    for(loop=0;loop < n; loop++){
        cout << "Enter details of student " << loop+1 << ":\n";
        std[loop].getDetails();
        std[loop].print();
        cout<<endl;     
    }
	      
    return 0;
}