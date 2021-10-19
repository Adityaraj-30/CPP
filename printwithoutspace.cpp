#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    char ch;
    string s1,s2,s3,s4,s5;
    fstream  file1, file2, file3;
    file1.open("stdfile.cpp", ios::in);
    file2.open("filename1.txt", ios::in);
    file3.open("filewithoutspace.txt", ios::out);
    file2.open("filename1.txt");
   if(!file2)
   {
       cout<<"error in opening file ";
       exit(100);
   }
   else if(ch==" ", continue);
   while(file3)
    { 
      getline(file3,s1,'\t');
      getline(file3,s2,'\t');
      getline(file3,s3,'\t');
      getline(file3,s4,'\t');
      getline(file3,s5,'\t');
      cout<<s1<<s2<<s3<<s4<<s5 <<endl;
    }
    file1.close();
    if(!file1.fail())
    {
    cout<<"error in closing file ";
    exit(102);
    }
    file2.close();
    if(!file2.fail())
    {
    cout<<"error in closing file ";
    exit(102);
    }
    file3.close();
    if(!file3.fail())
    {
    cout<<"error in closing file ";
    exit(102);
    }



return 0;
}