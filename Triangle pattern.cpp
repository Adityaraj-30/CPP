/*
	Name:Triangle pattern  
	Author: Aditya Raj
	Date: 29-12-20 18:25
	Description: 
*/
#include<iostream>
using namespace std;

int main(){
	int n,space;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=(n-i) ;j++){
				cout<<" ";
			}
		for(int j=1;j<=2*i-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n; i>=1; i--){
		for(int j=1; j<=(n-i) ;j++){
				cout<<" ";
			}
		for(int j=1;j<=2*i-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
		
	
	return 0;

}
