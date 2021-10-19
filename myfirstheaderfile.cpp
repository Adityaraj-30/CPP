#include<iostream>
#include"myfirstheaderfile.h"
#include<iomanip>

using namespace std;

int main(){
	double n1,n2 ,n3;
	cout<<"Enter the length in inch: "<<endl;
	cin>>n1;
	cout<<"The length "<<n1<<" in inch is " <<inchtofoot(n1)<<" in foot "<<endl;
    cout<<"The length "<<n1<<" in inch is " <<inchtocentimeter(n1)<<" in centimeter "<<endl;
    cout<<"The length "<<n1<<" in inch is " <<inchtoyard(n1)<<" in yard "<<endl;
    cout<<"Enter temperature in fahrenheit:"<<endl;
    cin>>n2;
    cout<<"Temperature in Fahrenheit is "<<n2 <<" and in celsius is "<<fahrenheittocelsius(n2)<<endl;
    cout<<"Enter angle in radian: "<< endl;
    cin>>n3;
    cout<<"The value of "<<n3<< " in radian is:"<<radiantodegree(n3)<<" in degree "<<endl;
    
	return 0;
}
