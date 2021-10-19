#include<iostream>
using namespace std;

int sum(int a, int b){  //Formal parameter a and b will be taking values from actual parameter num1 and num2
	int c=a+b;
	return c;
}

int main(){
	int num1, num2;
	cout<<"Enter first number"<<endl;
	cin>>num1;
	cout<<"Entr second number"<<endl;
	cin>>num2;
	cout<<"The sum is "<<sum(num1,num2);   //num1 and num2 are actual parameter
	return 0;
}
