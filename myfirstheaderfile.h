/*
	Name:myfirstheaderfile.h 
	Author: Aditya Raj
	Date: 17-12-20 22:46
	Description: 
*/

#include<iostream>

using namespace std;
#define PI 3.14

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
double fahrenheittocelsius(double fahrenheit){
	return 0.55*(fahrenheit-32);
}
double radiantodegree(double radian){
	return radian*180/PI;
}


