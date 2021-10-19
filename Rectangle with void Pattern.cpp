/*
	Name: 
	Copyright: 
	Author: 
	Date: 30-12-20 09:14
	Description: 
*/


#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter number of row and col ";
	cin>>n;
	for (int i=1; i<=n;i++){
		for(int j=1; j<=n;j++){
			if (i==1 || i==n) {
				cout<<" * ";
					
			}
			else if( j==1 || j== n){
				cout<<" = ";
			}
	
		    
			else {
				cout<<" ";
			}	
		}
		cout<<endl;
	}
			
			
		
		
	
	return 0;
}
