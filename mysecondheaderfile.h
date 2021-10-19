/*
	Name:mysecondheaderfile.h 
	Author: Aditya Raj
	Date: 15-12-20 22:46
	Description: 
*/

#include<iostream>
#include<cmath>

using namespace std;
bool check_prime(int num){

    bool flag=true;

    for(int i = 2; i <= sqrt(num) ; i++) {

       if(num % i == 0) {

          flag = false;

          break;

       }

    }

    return flag;
}
bool isPrime(int num){
	for(int i=2;i<=sqrt(num) ; i++){
		if (num%i==0){
			return false;
		}
	}
	return true;
}
int prime_term(int num){

int count=0;

for(int i=2; i<=num; i++){

            count=0;

        for(int j=2; j<i; j++){

                if(i%j==0){

                    count++;

                    break;

            }

        }

        if(count==0){

            cout<<i<<"\n";

        }

    }

}
bool is_Prime(int num){

    bool flag=true;

    for(int i = 2; i <= sqrt(num) ; i++) {

       if(num % i == 0) {

          flag = false;

          break;

       }

    }

    return flag;

}

