#include<iostream>
#include<iomanip>

using namespace std;
int international(int n);
int national(int n);
int main(){
	int n1;
	cout<<"Enter 6 digit number :";
	cin>>n1;

	return 0;
	
}
int international(int n){
	int x,y,z;
	x=n/1000;
	y=n%1000;
	
	cout<<"In internationa system is:"<<x<<","<<y<<endl;
	return 0;
}
/*int national(int n){
	int a,b,c;
	a=n/100000;
	b=n%100000/1000;
	c=n%1000;
	
	cout<<"In national system is:"<<a<<","<<b<<","<<c;
}*/
