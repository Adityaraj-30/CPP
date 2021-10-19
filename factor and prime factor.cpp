/*
	Name: factor and prime factor 
	Author: Aditya Raj
	Date: 13-01-21 19:50
	Description: WAP to compute factors and prime factors of a given number
*/

    
#include <iostream>
#include <cmath>
using namespace std;

void factor(int num){
    for(int i = 1; i <= num; ++i){
        if(num % i == 0)
        cout<<i<<endl;
   }
   return ;
   
}

bool PrimeFactors(int num) {

   for (int i = 2; i <= sqrt(num); i++){
      if (num%i == 0){
         return false;
      }
   }
   return true;
   
}

int main(){
    int num;
    cout<<"Enter any Positive Integer: ";
    cin>>num;
    cout<<"Factors are: "<<endl;
    factor(num);
    cout<<"\n""\n""\n";
    cout<<"Prime factors are: ";
    cout<<PrimeFactors(num); 
    return 0;  
 }

