#include<iostream>
//#include "Fraction.h"
using namespace std;

class Fraction{
	private: int numerator;
	         int denominator;
	         
	public: void store(int n, int d);
		    void print() const;         
};

void Fraction::store(int n, int d){
	numerator= n;
	denominator=d;
	return ;
}
void Fraction::print() const{
	cout<<numerator<<"/"<<denominator;
	return ;
}
int main(){
	int num, den;
	cout<<"Enter numerator and denominator :";
	cin>>num>>den;
	Fraction f1;
	f1.store(num, den);
	cout<<"The fraction is: ";
	f1.print();
	
	
	return 0;
}
