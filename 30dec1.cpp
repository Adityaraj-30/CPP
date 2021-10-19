# include <iostream>
using namespace std;
int main(){
	int sum=0;
	int n;
	cin>>n;
	
	for( ;n!=0;sum+=n){
		
		cin>>n;
		cout<<sum;
	}
 return 0;
}
