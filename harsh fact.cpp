/*
	Name: 
	Copyright: 
	Author: 
	Date: 10-01-21 20:22
	Description: 
*/

# include <iostream>

using namespace std;

//prototype declaration

float fact(int n);

float ser(int n);

 

float  fact(int n)

{ int fact=1;

   for(int x=n;x>0;x--)

      {

            fact*=x;

      }

      return fact;

}//factorial

float ser(int n)

{   float sum=0;

     for(float r=n; r>0;r--)

     {

          sum+=1/fact(r);

     }

     return sum;

}//series

 

int main()

{int n;

  float r;

  cout<<"enter a number = ";

  cin>>n;

  cout<<"the sum of "<<n<<"  terms of series is  = ";

  

  cout<<ser(n);
  return 0;

 

}
