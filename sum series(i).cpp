/*
	Name: sum series(i)
	Author: Aditya Raj
	Date: 10-01-21 20:21
	Description:S = 1+1/2+1/3+1/4+------------ 
	            S = 1 + 1/2! + 1/3! + 1/4!-----
	            S =1-2+3-4+5-----------
*/


#include<iostream>
using namespace std;

double sum_1(int n1){
	double i,s=0.0;
	
	for(i=1 ; i<=n1 ;i++){
		s=s +1/i;
	
	}
	return s; 
}
double factorial(int n2){
	int factorial=1;
	for(int i=1;i<=n2;i++){
		factorial*=i;
	}
	return factorial;
}
	
double sum_2(int n2){
	double j, s=0.0;
	for(j=1 ; j<=n2 ;j++){
		s+=1/factorial(j);
	
	}
	return s ; 
}
double sum_3(int n3){
	if(n3%2==1){
		return (n3+1)/2;
	}
	
		return -n3/2;
	
}
int main(){
	double n1, n2, n3;
	cout<<"\nEnter the the value of n1 "<<endl;
	cin>>n1;
	cout<<"\nsum of the first n terms of S = 1+1/2+1/3+1/4+------------  is: "<<sum_1(n1)<<endl;
	
	cout<<"\nEnter the the value of n2 "<<endl;
	cin>>n2;
	cout<<"\nsum of the first"<< n2 <<" terms of series S = 1 + 1/2! + 1/3! + 1/4!----- is :"<<sum_2(n2)<<endl;
	cout<<"\nEnter the value of n3 "<<endl;
	cin>>n3;
	cout<<"\nsum of the first n3 terms of S =1-2+3-4+5-----------is: "<<sum_3(n3)<<endl;
	
	return 0;
}

