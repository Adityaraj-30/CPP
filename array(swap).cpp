#include<iostream>
#define N 10
using namespace std;

void swap(int&x , int&y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	return ;
}

int main(){
	int arr[N]{0,1,2,3,4,5,6,7,8,9};
	swap(arr[1],arr[2]);
	swap(arr[3],arr[4]);
    cout<<"The value after swap "<<arr[1]<<arr[2]<<endl;
    cout<<"The value after swap "<<arr[3]<<arr[4]<<endl;
	return 0;
	
}
