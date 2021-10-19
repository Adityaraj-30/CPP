/*
	Name:  fahrenheittocelsius and vice versa
	Author: Aditya Raj
	Date: 25-12-20 20:40
	Description: 1(b) Fahrenheit to Celsius and vice versa.
*/
#include<iostream>
#include<iomanip>

using namespace std;
double fahrenheittocelsius(double fahrenheit);
double celsiustofahrenheit (double celsius);

int main(){
	double n1,n2;
	cout<<"Enter temperature in fahrenheit:"<<endl;
    cin>>n1;
    cout<<"Temperature in Fahrenheit is "<<n1 <<" and in celsius is "<<fahrenheittocelsius(n1)<<endl;
    cout<<"Enter temperature in celsius :"<<endl;
    cin>>n2;
    cout<<"Temperature in Celsius is "<<n2 <<" and in fahrenheit is "<<celsiustofahrenheit(n2)<<endl;
    
    return 0;
}


double fahrenheittocelsius(double fahrenheit){
	return 0.55*(fahrenheit-32);
}
double celsiustofahrenheit( double celsius){
	return ((celsius*1.8)+32); 
}
