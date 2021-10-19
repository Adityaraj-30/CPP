/*
	Name: mean, variance, stdDeviation
	Author: Aditya Raj
	Date: 12-01-21 18:55
	Description: WAP to find mean, variance, and stdDeviation of n given numbers
*/
#include<iostream>
#include<cmath>
#define N 5

using namespace std;

float get_mean( float freq[]){
    float sum=0.0, mean;
   
	int i;
	for(i=0; i<5; ++i){
		sum += freq[i];
		
	}
	return sum/5;
} //calculation of mean //

float get_variance(float freq[]){
	float variance=0.0;
	
	int i;
	for(i=0; i<5; ++i){
		variance +=pow(freq[i] - get_mean(freq) ,2);
	}
	return variance/5;
} //calculation of variance //

float get_stdDeviation(float freq[]){
	float stdDeviation;
	
	int i;
	for(i=0; i<5; ++i){
		stdDeviation =sqrt(get_variance(freq)/5);
	}
	return stdDeviation;
} //calculation of stdDeviation //

int main(){
	float freq[N]={12.5,10.0,7.0,8.8,2.5};
	cout<<"The mean of these data values is :"<<get_mean(freq)<<endl;
	cout<<"The variance of these data values is :"<<get_variance(freq)<<endl;
	cout<<"The stdDeviation of these data values is :"<<get_stdDeviation(freq)<<endl;
}
