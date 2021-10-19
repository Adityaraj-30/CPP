/*
	Name: 
	Copyright: 
	Author: 
	Date: 14-12-20 9:10
	Description: Function to get sum of digit
*/



#include<iostream>
# include <iomanip>
using namespace std;
//int getfirst(int n);
//int getsecond(int n);
int getsum(int n);


int main(){
	int n,getfirst,getsecond;
	cout<<"Enter two digit number";
	cin >>n;
//	cout<<"First digit is :"<<getfirst;
//	cout<<"Second digit is :"<<getsecond;
	cout<<getsum( n);
	 return 0;
}

int getfirst(int n){
	
	return(n/10);
	
	}
 int  getsecond(int n){
	
	return(n%10);
}
int getsum(int n){   
	int x,y,z;
	x=getfirst(n);
	y=getsecond(n);
	z=x+y;
	return z;
}


