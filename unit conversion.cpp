/*
	Name:  unit conversion
	Author: Aditya Raj
	Date: 25-12-20 20:55
	Description: 1(c) Inches measures into foot, centimeter, yard and meter.
*/
#include<iostream>
#include<iomanip>

using namespace std;
double inchtofoot(double inch);
double inchtocentimeter(double inch);
double inchtoyard(double inch);
double inchtometer(double inch);

int main(){
	double n1;
	cout<<"Enter the length in inch: "<<endl;
	cin>>n1;
	cout<<"The length "<<n1<<" in inch is " <<inchtofoot(n1)<<" in foot "<<endl;
    cout<<"The length "<<n1<<" in inch is " <<inchtocentimeter(n1)<<" in centimeter "<<endl;
    cout<<"The length "<<n1<<" in inch is " <<inchtoyard(n1)<<" in yard "<<endl;
	cout<<"The length "<<n1<<" in inch is " <<inchtometer(n1)<<" in meter "<<endl;
	return 0;
}

double inchtofoot(double inch){
    
    return inch*0.083;	
}
double inchtocentimeter(double inch){
	
   return inch*2.54;
}
double inchtoyard(double inch){
	
   return inch*0.0277;	
}
double inchtometer(double inch){
	
   return inch*0.0254;
}
