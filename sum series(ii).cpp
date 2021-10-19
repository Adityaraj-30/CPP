/*
	Name:  sum series(ii)
	Author: Aditya Raj
	Date: 10-01-21 21:21
	Description: S = 1 + 1/2! + 1/3! + 1/4!-----
*/

#include<iostream>

using namespace std;

double factorial(int n){
	int factorial=1;
	for(int i=1;i<=n;i++){
		factorial*=i;
	}
	return factorial;
}
	
double sum(int n){
	double j, s=0.0;
	for(j=1 ; j<=n ;j++){
		s+=1/factorial(j);
	
	}
	return s ; 
}
int main(){
	double n;
	cout<<"Enter the the value of n ";
	cin>>n;
	cout<<"sum of the first"<< n <<" terms of series is "<<sum(n);
    
	return 0;
}

