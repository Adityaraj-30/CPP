#include<iostream>
#include<cstdlib>
using namespace std;
double divide(double dvd, double divs){
    if (divs==0){
	throw divs;	
}
   return (dvd/divs);
}

int main(){
	double divident, divisor;
	cout<<"\nEnter divident and divisor: ";
	cin>>divident>>divisor;
	try{
	
	cout<<"The result is :"<<divide(divident,divisor);  
		
	}
	catch(double& error){
	cout<<"\nError 100: divide by zero..";
	exit(100);
	}
	return 0;
}
	

	

