#include<iostream>
#include<iomanip>
using namespace std;

//Function to calculate taxes 
double cal_tax(){
	double tot_income,tax_paid, noofdepndnts, taxincome, taxdue, tottax;
	double tax_income= tot_income-(noofdepndnts*1000);
	double tot_tax = 0;
	
	if (tax_income<10001){
		tot_tax=0.02*tax_income;
	}
	else if(tax_income>=10001&&tax_income<=20000){
		tot_tax=0.05*(tax_income-10000) + 0.02*10000;
	}
	else if(tax_income>=20001&& tax_income<=30000){
		tot_tax=0.07*(tax_income-20000)+ 0.05*(tax_income-10000)+0.02*10000;
	}
	else if(tax_income>=30001&&tax_income<=40000){
		tot_tax=0.1*(tax_income-30000)+0.07*(tax_income-20000)+ 0.05*(tax_income-10000)+0.02*10000;
	}
	else{
		tot_tax=0.15*(tax_income-40000)+0.1*(tax_income-30000)+0.07*(tax_income-20000)+ 0.05*(tax_income-10000)+0.02*10000;
	}
double tax_due=tot_tax - tax_paid;

    return tax_due;
}
int main(){
	double tot_income,tax_paid, noofdepndnts, tax_income, tax_due, tot_tax;
	
	cout<<"Enter total income :"<<endl;
	cin>>tot_income;
	cout<<"Enter tax paid by you :"<<endl;
	cin>>tax_paid;
	cout<<"Enter no of depndnts :"<<endl;
	cin>>noofdepndnts;
	cout<<"Tax income :"<<tax_income<<endl;
	cout<<"The total tax :"<<tot_tax<<endl;
	cout<<"The tax due is :"<<tax_due<<endl;
	
	return 0;
}
