
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter number of row and col ";
	cin>>n;
	for (int i=1; i<=n;i++){
		for(int j=1; j<=n;j++){
			if (i==1 || i==n||j==1||j==n) {
				cout<<" 4 ";
					
			}
			else if((i)==2||(i+1)==n|| (j)==2 || (j+1)== n){
				cout<<" 3 ";
			}
	
		    
			else if((i)==3||(i+2)==n|| (j)==3 || (j+2)== (n)) {
				cout<<" 2 ";
			}
			else if((i)==4||(i+3)==n|| (j)==4 || (j+3)== (n)) {
				cout<<" 1 ";
			}
			
		}
		cout<<endl;
	}
			
			
		
		
	
	return 0;
}
