/*
	Name: Reverse a number 
	Author: Aditya Raj
	Date: 10-01-21 20:42
	Description: WAP to reverse a number
*/

#include<iostream>
using namespace std;

int get_reverse(int n){
	int reverse =0;
	while(n>0){
		int lastdigit=n%10;
		reverse = reverse*10 + lastdigit;
		n=n/10;
	}
	return reverse;
}

int main(){
	int n;
	cout<<"Enter a number ";
	cin>>n;
	
	cout<<"The reverse of number "<<n<<" is "<<get_reverse(n)<<endl;
	
	return 0;
}
