/*
	Name: electricity bill
	Author: Aditya Raj
	Date: 26-12-20 20:27
	Description: 	4. Write a program to input electricity unit charges and calculate total electricity bill according to the given condition: 
		For first 50 units Rs. 0.50/unit
		For next 100 units Rs. 0.75/unit
		For next 100 units Rs. 1.20/unit
		For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
float ele_bill(float unit){
	if(unit<=50){
		return (unit*0.50)*0.2;
	}
	else if(unit>=51 && unit<=150){
		return (unit*0.75)*0.2;
	}
	else if(unit>= 151 && unit<=250){
		return (unit*1.2)*0.2;
	}
	else{
		return (unit*1.5)*0.2;
	}

} 

int main(){
float unit, type;

cout<<"Enter electricity unit charges "	<<endl;
cin>>unit;
cout<<"Total electricity bill :"<<ele_bill(unit);
	return 0;
}
