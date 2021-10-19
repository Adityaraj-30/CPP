/*
	Name: nPr
	Author: Aditya Raj
	Date: 29-12-20 21:53
	Description: 
*/
#include<iostream>
using namespace std;

int fact(int n){
	int factorial=1;
	for(int i=1;i<=n;i++){
		factorial*=i;
	}
	return factorial;
}

int main(){
	
	int n,r;
	cin>>n>>r;
	
	int ans=fact(n)/(fact(n-r));
	cout<<ans;
	return 0;
}
