#include <iostream>
#include <fstream>
#include <string>
using namespace std;

 int main(){
    char ch;
   fstream infile;
   infile.open("filename1.txt");
   
   while(infile.get(ch)){
   if(ch='RollNo'){
       cout<<ch<<endl;
   }
   else{
       cout<<endl;
   }
   }
   infile.close();
   
   return 0;
   
}
