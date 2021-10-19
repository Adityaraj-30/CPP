/*
	Name: sum series(i)
	Author: Aditya Raj
	Date: 10-01-21 20:21
	Description:S = 1+1/2+1/3+1/4+------------ 
*/


#include<iostream>
using namespace std;

double sum(int n){
	double i,s=0.0;
	
	for(i=1 ; i<=n ;i++){
		s=s +1/i;
	
	}
	return s; 
}
int main(){
	double n;
	cout<<"Enter the the value of n "<<endl;
	cin>>n;
	cout<<" sum of the first n terms is "<<sum(n);
	return 0;
}
