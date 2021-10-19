#include<iostream>
using namespace std;

class NewFloat
{
	float floatData;
	public:
	//	float floatData;
	    NewFloat();
		NewFloat(float n );
		void printData();
		float deciData();
		NewFloat operator ++(int );
		bool operator<(NewFloat f);
	    operator int ( );
		
};
int main()
{
	float n1=0.0, n2=0.0;
	cout<<"Enter two floating point number"<<endl;
	cin>>n1>>n2;
	NewFloat f1(n1),f2(n2);
	f1.printData();
	f2.printData();
	cout<<"Now deciData method is called :"<<endl;
	cout<<f1.deciData()<<'t'<<f2.deciData();
	cout<<"now <operator is used :"<<(f1<f2);
	return 0;
}
NewFloat::NewFloat(){
	floatData=0.0;
}
NewFloat :: NewFloat(float n)
{
   floatData=n;
}
void NewFloat :: printData()
{
	cout<<"\nData is "<<floatData<<endl;
}
float NewFloat :: deciData()
{
	int num=floatData;
	float ans=floatData-num;
	return ans;
}
NewFloat NewFloat::operator ++(int )
{
	float num=floatData;
	floatData++;
	return num;
}
bool NewFloat::operator <(NewFloat f){
	if(floatData<f.floatData)
	return 1;
	return 0;
}
NewFloat::operator int(){
	int num=floatData;
	return num;
}
