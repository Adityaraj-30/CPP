/*
	Name: determines student grade
	Author: Aditya Raj
	Date: 26-12-20 18:10
	Description: 	3. WAP that determines a student's grade. Input three test scores from user between 0 and 100. Calculate and display a student's grade based on the following rules:
	a)	if average score is 90% or more, the grade is A.
	b)	if average score is 70% or more, and less than 90% it checks the third score, if the third score is 90% or more, the grade is A otherwise the grade is B.
	c)	if average score is 50% or more, and less than 70% it checks the average of second and third score, if the average of two is greater than 70%, the grade is C otherwise the grade is D.
	d)	if average score is less than 50%, then the grade is F.

*/
#include<iostream>
#include<iomanip>
using namespace std;

int grade(int a, int b,int c){
	int avg, tavg;
	tavg=(a+b+c)/100;
	avg=(b+c)/100;
	
	if(tavg>= 90){
		cout<<"The grade is A "<<endl;
	}
	else if(tavg>=70 && tavg<=90){
		if(a>=90){
			cout<<"The grade is A "<<endl;
		}
		else{
			cout<<"The grade is B "<<endl;
		}
	}
	else if(tavg>=50 && tavg<= 70){
		if(avg>70){
			cout<<"The grade is C "<<endl;
		}
		else{
			cout<<"The grade is D "<<endl;
		}
	}
	else{
		cout<<"The grade is F "<<endl;
	}
	return (a,b,c);
}

int main(){
	int n1,n2 ,n3, type,tavg,avg;
//	tavg=(n1+n2+n3)/100;
//	avg=(n2+n3)/100;
	cout<<"Enter score of first test out of 100 :"<<endl;
	cin>>n1;
	cout<<"Enter score of second test out of 100:"<<endl;
	cin>>n2;
	cout<<"Enter score of third test out of 100:"<<endl;
	cin>>n3;
	type= grade(n1,n2,n3);
	return 0;
}


