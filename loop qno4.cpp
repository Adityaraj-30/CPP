/*
	Name: loop qno4
	Author: Aditya Raj
	Date: 29-12-20 20:12
	Description: 
*/


#include<iostream>
using namespace std;

int main(){
	int n,A;
	cin>>n;


for( int i=n; i>=1; i--){
		for(int j=1; j<=i; j++){
		
		    cout<<char(i+64);	
		}
			
		
		int space=2*n-2*i;
		for(int j=1; j<=space; j++){
			cout<<" ";
		}
			for(int j=1; j<=i; j++){
				cout<<char(i+64);
		
			}
		
			cout<<endl;
		
	}
	return 0;
}
