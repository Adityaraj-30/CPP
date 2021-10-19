/*
	Name: prime 
	Author: Aditya Raj
	Date: 13-01-21 23:05
	Description: Write a function to find whether a given number is primr or not.
	            i) first n prime number
	            ii)prime number upto n
	            iii)n prime number starting from m
*/


#include<iostream>
#include"mysecondheaderfile.h"
#include<iomanip>


using namespace std;

int main(){
	int n,m=0,num,a,b,num1;
	cout <<"How many prime numbers do you want to print? : ";
	cin >>n;
	for ( int i=2;i<=10000;++i)
	{
		if (check_prime(i)==1&&m<n)
		{
			m+=1;
			cout <<i<<'\t';
			cout<<endl;
		}
	}
	
  
   bool flag;
   cout<<"\n Enter any positive number: ";
   cin>>num;

   flag = is_Prime(num);

   if (flag==true)

    cout<<num<<"\n is a prime number \n"<<endl;

   else

    cout<<num<<"\n is not a prime number \n"<<endl;
      
 
    cout<<"a prime number upto b :"<<endl;
	cin>>a>>b;
	
	for(int i=a; i<=b ;i++){
		if(isPrime(i)){
			cout<<i<<endl;
		}
	}
       
    cout<<"\n Enter numbers upto 'n' terms: ";

    cin>>num1;

   cout<<"\n Prime number upto "<<num1<<" numbers :\n";

   prime_term(num1);       
	
	return 0;
	


}

