/*
	Name: function
	Author:Aditya Raj 
	Date: 31-01-21 20:30
	Description:Basic operation on function 
*/

#include <iostream>
using namespace std;

class Fraction{
	private:
		float numerator;
		float denominator;
		
	public:
	    void store(float numerator, float denominator);
	    void add(const Fraction& sum);
	    void sub(const Fraction& minus);
	    void prod(const Fraction& mul);
	    void division(const Fraction& divide);
	    void print()const;
};
void Fraction::store(float num , float den)
{
	numerator=num;
	denominator=den;
	return ;
}
void Fraction::add(const Fraction& sum)
{
	numerator=(numerator*sum.denominator)+(sum.numerator*denominator);
	denominator=denominator*sum.denominator;
	return;
}
void Fraction::sub(const Fraction& minus)
{
	numerator=(numerator*minus.denominator)-(minus.numerator*denominator);
	denominator=denominator*minus.denominator;
	return;
}
void Fraction::prod(const Fraction& mul)
{
	numerator=numerator*mul.numerator;
	denominator=denominator*mul.denominator;
	return ;
	
}
void Fraction::division(const Fraction& divide)
{
	numerator=(numerator*divide.denominator);
	denominator=(denominator*divide.numerator);

	return;
	
}
void Fraction::print()const
{
	cout<<numerator<<"/"<<denominator;
	return ;
}
int main(){
	int numerator1,denominator1, numerator2,denominator2;
	cout<<"Enter the value of numerator part of first number:"<<endl;
	cin>>numerator1;
	cout<<"\nEnter the value of denominator part of first number:"<<endl;
	cin>>denominator1;
	cout<<"\nEnter the value of numerator part of second number:"<<endl;
	cin>>numerator2;
	cout<<"\nEnter the value of denominator part of second number:"<<endl;
	cin>>denominator2;
	
	Fraction f1, f2;
	f1.store(numerator1, denominator1);
	cout<<"\nfraction number1:"<<endl;
	f1.print();
	cout<<endl;
	
	f2.store(numerator2, denominator2);
	cout<<"\nfraction number2:"<<endl;
	f2.print();
	cout<<endl;
	
	f1.add(f2);
	cout<<"\nThe sum of the fraction number is:"<<endl;
	f1.print();
	
 
    f1.store(numerator1,denominator1);
    f1.sub(f2);
    cout<<"\n\nThe difference of fraction number is:"<<endl;
    f1.print();
 
    f1.store(numerator1,denominator1);
    f1.prod(f2);
    cout<<"\n\nThe product of fraction number is:"<<endl;
    f1.print();  
 
    f1.store(numerator1,denominator1);
    f1.division(f2);
    cout<<"\n\nThe division of complex number is:"<<endl;
    f1.print(); 
 
return 0;
 
}
