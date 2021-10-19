#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	int a;
	int b;
	a=b=50;
	cout<<setw(4) << a << setw(4)<< b << endl;
	a=a*2;
	b= b/2;
	cout<<setw(4) << a << setw(4) << b << endl;
	return 0;
	
}
