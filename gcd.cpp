/* Name: GCD 
	Author: Aditya Raj
	Date: 10-01-21 19:29
	Description:WAP to print gcd of an integer 
 */
#include<iostream>
using namespace std;
int GCD(int n, int m)
{
    int gcd=1;
    for(int k=1;k<=n && k<=m; k++)
    {
        if(n%k==0 && m%k==0)
        {
            gcd=k;
        }

    }
    return gcd;
}
int main()
{
    cout<<"The gcd of number 10 and 2 is:"<<GCD(10,2);
}
