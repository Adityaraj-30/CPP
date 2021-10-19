/*
	Name: array menu 
	Author: Aditya Raj
	Date: 15-01-21 23:39
	Description: 1. Print the even-valued elements \n"<<

"2. Print the odd-valued elements \n"<<

"3. Calculate and print the sum and average of the elements of array \n"<<

"4. Print the maximum and minimum element of array \n"<<

"5. Remove the duplicates from the array \n"<<

"6. Store and the array in reverse order without using additional array  \n";

*/

#include<iostream>
#define N 10

using namespace std;
int even_odd( int arr[]){
	
	for(int i=0; i<10; i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<"= even"<<endl;
		}
		else{
			cout<<arr[i]<<"= odd"<<endl;
		}
	}
 
}

int sum(const int arr[],int n){
	float ans =0.0;
	for(int i=0; i<n; i++){
		ans+=arr[i];
	}
	return ans;
}
float avg( int arr[]){
	float ans =0.0;
	for(int i=0; i<10; i++){
		ans+=arr[i];
	}
	return ans/10;
}
int max(int arr[], int n){
	int max_no;;
	for(int i=0; i<n; i++){
		if(arr[i]>max_no){
			max_no=arr[i];
		}
		
	}
	return max_no;
}
int min(int arr[], int n){
	int min_no;;
	for(int i=0; i<n; i++){
		if(arr[i]<min_no){
			min_no=arr[i];
		}
		
	}
	return min_no;
}

int reverse(int arr[],int n){
	for(int i=N-1; i>=0; i--){
		cout<<arr[i]<<endl;
	}
}


int main(){

	int arr[N]={1,2,3,4,5,6,7,8,9,1};
	
	cout<<"Sum ="<<sum(arr,9)<<endl;
	cout<<"Avg ="<<avg(arr)<<endl;
	cout<<even_odd(arr)<<endl;
	cout<<"Max number is: "<<max(arr,N)<<endl;
	cout<<"Min number is: "<<min(arr,N)<<endl;
	cout<<reverse(arr,N);
	return 0;
}

