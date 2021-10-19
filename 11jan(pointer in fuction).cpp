#include<iostream>

using namespace std;
void swap(int *x, int*y){
	int temp;
	temp= *x;
	*x =*y;
	*y = temp;
	return;
}

int main(){
	int a=8, b=3;
	cout<<a<<" "<<b<<endl;
	swap(&a , &b);
	cout<<a<<" "<<b;
	return 0;
}
