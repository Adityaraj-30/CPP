#include<iostream>
using namespace std;

struct employee
{
	int eID;
	char favChar;
	double salary;
};  

union money
{
	int rice;
	char car;
	double pounds;
};
int main(){
	struct employee adi;
	adi.eID=1;
	adi.favChar='a';
	adi.salary = 70000;
	cout<<adi.salary<<endl;
	cout<<adi.favChar<<endl;
	cout<<adi.eID<<endl;
	
	union money m1;
	m1.rice=34;
	m1.car='c';
	m1.pounds=23;
	
	cout<<m1.car<<endl;
	
	enum Meal{breakfast, lunch, dinner};
	cout<<breakfast<<endl;
	return 0;
	
	
}
