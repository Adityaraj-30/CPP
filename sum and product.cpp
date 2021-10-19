/*
	Name: sum and product 
	Author: Aditya Raj
	Date: 10-01-21 19:29
	Description:WAP to print sum and product of digits of an integer 
*/
#include<iostream>

using namespace std;
int get_sum(int n1, int n2){
	int sum=n1 + n2;
	return sum;
} //sum

int get_product(int n1, int n2){
	int product =n1*n2;
	return product;
} //product

int main(){
	int n1, n2;
	cout<<"Enter the first number: ";
	cin>>n1;
	cout<<"Enter the second number: ";
	cin>>n2;
	
	cout<<"The sum and product of number "<<n1<<" and  "<<n2<<" are "<<get_sum(n1,n2)<<" and "<<get_product(n1,n2) ;
	return 0;
}
