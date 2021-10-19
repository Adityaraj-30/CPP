/*
	Name: roots of a quadratic equations
	Author: Aditya Raj
	Date: 26-12-20 20:59
	Description: 	2. WAP to compute the real roots of a quadratic equations: ax2+bx+c=0, Further, 
	a)	if a, b = 0 then there is no solution,
	b)	if a = 0 one root (-c/b)
	c)	if discriminant is -ve, there are no real roots.
	d)	for all other combinations there are two roots.

*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c,x1,x2,discriminant,realpart,imaginary_part,x;
    cout<<"give value for a with 'x^2':";
    cin>>a;
    cout<<"give value for b with 'x':";
    cin>>b;
    cout<<"give value for c:";
    cin>>c;
    cout<<"the equation is:"<<a<<"x^2"<<"+"<<b<<"x"<<"+"<<c<<"="<<"0"<<endl;
    discriminant=b*b - 4*a*c;
    if(discriminant>0){
        x1=(-b-sqrt(discriminant))/(2*a);
        x2=(-b+sqrt(discriminant))/(2*a);
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }
    else if(a==0 and b==0){
        cout<<"there is no solution";
    }
    else if(discriminant==0){
         cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }
    return 0;
}
