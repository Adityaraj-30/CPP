
#include <iostream>
using namespace std;

class complex{
	private:
		float real;
		float imaginary;
		
	public:
	    void store(float real, float imaginary);
	    void add(const complex& sum);
	    void sub(const complex& minus);
	    void prod(const complex& mul);
	    void division(const complex& divide);
	    void print()const;
};
void complex::store(float r , float i)
{
	real=r;
	imaginary=i;
	return ;
}
void complex::add(const complex& sum)
{
	real=real+ sum.real;
	imaginary=imaginary+sum.imaginary;
	return;
}
void complex::sub(const complex& minus)
{
	real=real-minus.real;
	imaginary=imaginary-minus.imaginary;
	return;
}
void complex::prod(const complex& mul)
{
	real=real*mul.real-imaginary*mul.imaginary;
	imaginary=imaginary*mul.real+real*mul.imaginary;
	return ;
	
}
void complex::division(const complex& divide)
{
	real=(real*divide.real+imaginary*divide.imaginary);
	imaginary=(imaginary*divide.real+real*divide.imaginary);
	real/=float(divide.real*divide.real+divide.imaginary*divide.imaginary);
	return;
	
}
void complex::print()const
{
	cout<<real<<"+"<<imaginary<<"i";
	return ;
}
int main(){
	int real1,imaginary1, real2,imaginary2;
	cout<<"Enter the value of real part of first number:"<<endl;
	cin>>real1;
	cout<<"\nEnter the value of imaginary part of first number:"<<endl;
	cin>>imaginary1;
	cout<<"\nEnter the value of real part of second number:"<<endl;
	cin>>real2;
	cout<<"\nEnter the value of imaginary part of second number:"<<endl;
	cin>>imaginary2;
	
	complex c1, c2;
	c1.store(real1, imaginary1);
	cout<<"\ncomplex number1:"<<endl;
	c1.print();
	cout<<endl;
	
	c2.store(real2, imaginary2);
	cout<<"\ncomplex number2:"<<endl;
	c2.print();
	cout<<endl;
	
	c1.add(c2);
	cout<<"\nThe sum of the complex number is:"<<endl;
	c1.print();
	
 
    c1.store(real1,imaginary1);
    c1.sub(c2);
    cout<<"\n\nThe difference of complex number is:"<<endl;
    c1.print();
 
    c1.store(real1,imaginary1);
    c1.prod(c2);
    cout<<"\n\nThe product of complex number is:"<<endl;
    c1.print();  
 
    c1.store(real1,imaginary1);
    c1.division(c2);
    cout<<"\n\nThe division of complex number is:"<<endl;
    c1.print(); 
 
return 0;
 
}