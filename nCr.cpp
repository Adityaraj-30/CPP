/*
	Name: nCr & nPr
	Author: Aditya Raj
	Date: 29-12-20 21:53
	Description: 
*/
#include<iostream>
using namespace std;

int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
} // calculation of factorial //

int nCr(int n, int r){
	
	int nCr=factorial(n)/(factorial(r)*factorial(n-r));
	return nCr;
} //  calculation of nCr //

int nPr(int n, int r){

	int nPr=factorial(n)/(factorial(n-r));
	return nPr;
} // calculation of nPr //

int main(){
	
	int n,r;
	cout<<"Enter the value of n:";
	cin>>n;
	cout<<"Enter the value if r:";
	cin>>r;
	cout<<"The value of "<<n<<"C"<<r<<" = "<<nCr(n,r)<<endl;
	cout<<"The value of "<<n<<"P"<<r<<" = "<<nPr(n,r);
	return 0;
}
