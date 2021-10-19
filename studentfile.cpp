#include <iostream>
#include <fstream>
#include<stdlib.h> 
using namespace std;
 
#define MAX 10
 
class student
{
    private:
        int   rollNo;
        char  name[30];
        int   total;
    public:
        
        void getDetails(void);                        //member function to get student's details
        
        void putDetails(void);                        //member function to print student's details
};
 

 

void student::getDetails(void){    
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter total marks outof 500: ";
    cin >> total;
}
 

 

void student::putDetails(void){
    cout << "Student details:\n";
    cout << ",Roll Number:" << rollNo << "Name:"<< name << ",Total:" << total;
}
 
int main()
{
    ofstream record;
    student std[MAX];       //array of objects creation
    int n,loop;
    char data;
     
    cout << "Enter total number of students: ";
    cin >> n;
    
    
    record.open("filename.txt",ios::out | ios::in);
    for(loop=0;loop < n; loop++){
        cout << "Enter details of student " << loop+1 << ":\n";
        std[loop].getDetails();
        record.write((char*)&std[loop],sizeof(std[loop]));
        record<<data<<endl;
      
  }
    
    
    
    
    
    record.close();
    cout<<"Done!!!";
    
     
    return 0;
}
