#include<iostream>

using namespace std;
inline int product(int a, int b){
//  not recommended to use below lines with inline function
//	static int c=0; //This executes only once
//	c=c+1;  //next time this function is run,the value of c will be retained
	return a*b;
}

float moneyReceived(int currentmoney, float factor=1.04){  //Default arugement
	return currentmoney*factor;
}
int main(){
//	int a,b;
//	cout<<"Enter the valve of a & b ";
//	cin>>a>>b;
//	cout<<"The product of a and b is "<<product(a,b);
    int money=100000;
	cout<<"If u have "<<money<<" Rs in your bank acc, u wii recive "<<moneyReceived(money)<<" RS after 1 year "<<endl;
	cout<<"For VIP: If u have "<<money<<" Rs in your bank acc, u wii recive "<<moneyReceived(money,1.1)<<" RS after 1 year "<<endl;
	return 0;
}
