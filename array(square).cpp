#include<iostream>
#define N 5
using namespace std;

void square(const int e[], int sq[], int n){
	for(int i=0; i<n; i++){
		sq[i]=e[i]*e[i];
	} 
	return ;
}
int main(){
	int arr[N]={1,2,3,4,5};
	int sqarr[N]={0};
	square(arr,sqarr,N);
	cout<<"The element and its square are "<<endl;
	for(int i=0; i<N; i++){
		cout<<arr[i]<<": "<<sqarr[i]<<endl;
	}
	return 0;
}


