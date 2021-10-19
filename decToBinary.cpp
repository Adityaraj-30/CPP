/*
	Name: decToBinary 
	Author: Aditya Raj
	Date: 11-01-21 21:32
	Description: WAPA to convert a dec(base 10) to binary (base 2) of a number 
*/
#include<iostream>
using namespace std;

void decToBinary(int n){ 
    
    int binaryNum[32]; // size of binary assumed  to be 32 bits
  
    int i = 0; 
    while (n > 0) { 
        binaryNum[i] = n % 2;    // storing remainder in binary array 
        n = n / 2; 
        i++; 
    } 
  
    for (int j = i - 1; j >= 0; j--)   
        cout << binaryNum[j]; 
} // printing binary array in reverse order 
int main(){
	int n;
	cout<<"Enter a dec number to convert into binary :";
	cin>>n;
	decToBinary(n);
	return 0;
}
