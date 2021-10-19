#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number ";
	cin>>n;
	
	int sum=0;
	int original = n;
	while (n>0){
		int lastdigit =n%10;
		sum+=pow(lastdigit,3);
		n=n/10;
	}
	
	if(sum==original){
		cout<<"Armstrong number ";
		
	}
	
	else{
		cout<<"not armstrong number ";
	}
	return 0;
}
