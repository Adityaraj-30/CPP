/*
	Name: sum series(iii)
	Author: Aditya Raj
	Date: 10-01-21 20:04
	Description: (c) S =1-2+3-4+5-----------
*/



#include<iostream>
using namespace std;

int sum(int n){
	if(n%2==1){
		return (n+1)/2;
	}
	
		return -n/2;
	
}
int main(){
	int n;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	cout<<" sum of the first n terms is "<<sum(n);
	return 0;
}
