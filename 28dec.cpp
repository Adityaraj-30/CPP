 /*
	Name: Factorial
	Author: Aditya Raj
	Date: 28-12-20 09:10
	Description: 
*/
#include<iostream>
 using namespace std;
 int main() {
 int num,factorial=1;
 cout<<" Enter Number To Find Its Factorial: ";
 cin>>num;
 for (int a=1;a<=num;a++) {
 factorial=factorial*a;
 }
 cout<<"Factorial of Given Number is ="<<factorial<<endl;
 return 0;
}

