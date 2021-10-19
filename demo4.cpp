#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
//    string s1("Hellow!");
  //  s1.erase(4,1);
    //cout<<s1<<endl;
    //string s1("Good Morning!");
    //s1.replace(5,7, "Evening",0,7);
    //cout<<s1<<endl;
 /*   string s1("Hello World!");
    string s2=s1.substr(6,2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    
   bool b;
   string s1("Hello");
   string s2("Hello!");
   b=(s1==s2);
   cout<<b<<endl;

   string s1="Hello";
   string s2="Hello!";
   int i=s1.compare(0,3,s2,0,3);
   cout<<i<<endl;
   
  string s1("Hello");
  string s2(s1);
  string s3=s1+ " "+ s2;
  cout<<s3<<endl;
  
 string s1("Hello");
 s1.erase(4,1);
 cout<<s1<<endl;
 
string s1=" The C++ Standard";
int i=s1.find("C",0);
int j=s1.rfind("C",0);
cout<< i << j <<endl;
*/
char s1[50]="xyzt";
char* s2="uabefgnpanm";
char* s3;
char* s4;
char* s5;
char* s6;
s3=s1;
s4=s2;
strcat(s1,s2);
s5=strchr(s1,'y');
s6=strrchr(s2,'n');
cout<<s3<<endl;
cout<<s4<<endl;
cout<<s5<<endl;
cout<<s6<<endl;



    return 0;
}