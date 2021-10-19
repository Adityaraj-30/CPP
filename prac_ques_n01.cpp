/*
	Name:prac_ques_n01 
	Author: Aditya Raj
	Date: 09-03-21 9:36
	Description: Write a program in C++ that defines a parameterized function sumPrime()to accept an integer n as an argument and return the sum of first n prime numbers. Define function main()and invoke the above function to show its working.
*/

#include<iostream>
#include<cmath>

using namespace std;
bool check_Prime(int num){    // to check first Prime Numbers

    bool flag=true;

    for(int i = 2; i <= sqrt(num) ; i++) {

       if(num % i == 0) {

          flag = false;

          break;

       }

    }

    return flag;
}
int sumPrime(int n) //Function to Calculate sum of first n Prime Numbers
{
    int sum=0,count=0;
    for(int i=2; ;i++)  
    {
        if(check_Prime(i)==1)
        {    
            sum+=i;       //Calculating Sum
            count++;      //Increasing count
        }
        if(count==n)
            break;
    }
    return sum;  //Returning sum
}

int main()
{
    int n;
    cout<<"\nEnter the value of n:"<<endl;
    cin>>n;              
    cout<<"\nSum of First " << n <<" Prime Numbers is:"<<sumPrime(n);  
    return 0;
}   //main

