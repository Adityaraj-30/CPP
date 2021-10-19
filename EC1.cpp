#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	double divident, divisor;
	cout<<"\nEnter divident and divisor: ";
	cin>>divident>>divisor;
	try{
	
	    if (divisor==0){
		throw divisor;
		
	}
	cout<<"The result is :"<<(divident/divisor);
}
	
	catch(double& error){
		cout<<"\nError 100: divide by zero..";
		exit(100);
	}
	return 0;
}
