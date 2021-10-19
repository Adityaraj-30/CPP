#include<iostream>
using namespace std;
double divide( double dvnd, double dvsr)
{
    float zeroError=0;
    double negError=-1;
    if(dvsr==0.0)
        throw zeroError;
    if(dvsr<0)
        throw negError;    
    return dvnd/dvsr;   

}// divide
int main(){
    double dividend, divisor;
    cout<<"\nEnter the dividend: ";
    cin>>dividend;
    cout<<"\nEnter the value of divisor: ";
    cin>>divisor;
    try
    {
       double quotient=divide(dividend,divisor);
       cout<<"\nQuotient is: "<<quotient<<endl;
        
    } //try
    catch(float &zeroError)
    {
        cout<<"\n***Error 100: divisor is 0\n";
        exit(100);
    } //catch
    catch(double &negError)
    {
        cout<<"\n***Error 101: divisor is negative\n";
        exit(101);
    }
    
return 0;
}