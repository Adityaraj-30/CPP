/*
	Name: 
	Copyright: 
	Author: 
	Date: 14-12-20 9:10
	Description: Function to get sum of digit
*/



#include<iostream>
using namespace std;

int getsum(int n);


int main(){
	int n , getfirst , getsecond;
	cout<<"Enter two digit number";
	cin >>n;
	cout<<getsum(n);
	 return 0;
}
int getsum(int n) {
	
	return (getfirst(int n) + getsecond(int n));
}
int getfirst(int n){
	
	return(n/10);
}

int	getsecond(int n){
	
	return(n%10);
	
}

