#include<iostream>
using namespace std;

int factorial(int n){
	if(n<=1){
		return 1;
	}
	return n*factorial(n-1);
}

int fib(int n){
	if (n<=1){
		return 1;
	}
	return fib(n-2)+fib(n-1);
}
int main(){
	//Factoriall of a number:
	//6!=6*5*4*3*2*1=720
	//0!=1 
	//1!=1
	//n!=n*(n-1)!
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
//	cout << "The factorial of "<<a<< " is "<<factorial(a)<<endl;
	cout << "The fibnacci seq of "<<a<< " is "<<fib(a)<<endl;
	return 0;
}
