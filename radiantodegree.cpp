/*
	Name: radiantodegree 
	Author: Aditya Raj
	Date: 25-12-20 20:36
	Description: 1(a) Radians to degrees
*/

#include<iostream>
#include<iomanip>
#define PI 3.14
using namespace std;

double radiantodegree (double radian);

int main(){
	double n1;
	cout<<"Enter angle in radian: "<< endl;
    cin>>n1;
    cout<<"The value of "<<n1<< " in radian is:"<<radiantodegree(n1)<<" in degree "<<endl;
    
	return 0;
}



double radiantodegree(double radian){
	return radian*180/PI;
}


