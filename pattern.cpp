/*
	Name: patterns
	Author: Aditya Raj
	Date: 12-01-21 22:55
	Description: 
*/

#include<iostream>
using namespace std;

void rightTriangle(int n){
	
	for( int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
	cout<<endl;	 
   }
   return  ;
}
void Triangle(int n){
	
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=(n-i) ;j++){
				cout<<" ";
			}
		for(int j=1;j<=2*i-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return ;
}
void rightTriangle_1 (int n){
	
	
	for( int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j<=n-i){
				cout<<" ";
			}
			else{
			   cout<<"*";
		    }
		}
		cout<<endl;
	}
	return ;
}
void Diamond(int n){

	
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
		
	
	return ;

}


void inverted_alphabet(int n){



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
	return ;
}

int main(){
	int n;
	cout<<"Enter the value of n :";
	cin>>n;
	rightTriangle(n);
	Triangle(n);
	rightTriangle_1(n);
	Diamond(n);
	inverted_alphabet(n);
}
