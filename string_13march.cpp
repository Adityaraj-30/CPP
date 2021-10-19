#include <iostream>
#include<string>
using namespace std;

int main(){
	string s;
	char ch;
	cout<<"Enter the string :"<<endl;
	getline(cin,s);
	cout<<"Total length :"<<s.length()<<endl;

	int length=s.length() , i=0;
	   while(i< length)
	   {
	   
	   
	   	ch=s[i], i++;
	   
	   if (ch==' ')continue;
	 	cout<<ch;
	    
	}

   
	return 0;
}
