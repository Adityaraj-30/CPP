/*
	Name:  Fabonacci sequence
	Author: Aditya Raj
	Date: 12-01-21 18:14
	Description: Write a function to print Fabonacci sequence and call it from main.
*/
#include<iostream>
using namespace std;

void fib(int n){
	int t1=0;
	int t2=1;
	int nextTerm;
	
	for(int i=1; i<=n; i++){
		cout<<t1<<endl;
		nextTerm=t1 + t2;
		t1=t2;
		t2=nextTerm;
		
	}
	return ;
}
int main(){
	int n;
	cout<<"Enter the value of n terms:";
	cin>>n;
	fib(n);
    
	return 0;
}
