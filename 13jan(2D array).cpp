#include<iostream>
#define MAX_C 10
#define MAX_R 10

using namespace std;

void read_array(int in_arr[][MAX_C], int r, int c){
	for(int i=0; i<r; i++){
	for(int j=0; j<c; j++) 
	{
	
		cout<<"\n Enter element for :"<<i<<","<<j<<":";
		cin>>in_arr[i][j];
	}
 }
}

void print_array(int out_arr[ ][MAX_C], int r, int c){
	for(int i=0; i<r; i++){
	
	for(int j=0; j<c; j++)
	{
		
		cout<<out_arr[i][j];
	
	}
	cout<<endl;
  }
	return;
}

int main(){
	int arr[MAX_R][MAX_C];
	int row, col;
	cin>>row>>col;
	read_array(arr,row,col);
	print_array(arr,row,col);
	return 0;
}
