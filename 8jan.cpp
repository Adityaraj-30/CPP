#include<iostream>

using namespace std;
void generate_freq(ifstream&, int []);
void printhisto( int []){
	for(int i=0; i<n; i++){
		for(int j=0;j<freq[i];j++){
			cout<<char(i+64);
		}
		cout<<endl;
	} 
	return ;
}
int main(){
	//int arr[N]={1,2,3,4,5};
	int freq[N]={0};
	printhisto(arr,freq,N);
	cout<<"The element and its freq are "<<endl;
	for(int i=0; i<N; i++){
		cout<<arr[i]<<char(124)<<freq<<endl;
	}
	return 0;
}


