#include<iostream>
#include<iomanip>

using namespace std;
int main(){
	float f1;
	int n1;
	cout<<"Enter a number:";
	cin>>f1;
	n1=static_cast <int>(f1)/10;
	cout<<"The second right most digit of a given " <<f1<<" is :" <<n1;
	
	return 0;
	
}
