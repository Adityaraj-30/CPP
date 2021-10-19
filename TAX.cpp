#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

 

float Tax_income(float total_income, float numOfDepndnts){
    float Taxable_income;
    Taxable_income=total_income - (numOfDepndnts*1000);
    return Taxable_income;
}

 

 


float tax_total(float Taxable_income){
    float total_tax;
    if(Taxable_income<10000){
        total_tax=Taxable_income*(2.0/100);
    }
    else if(Taxable_income>=10001 && Taxable_income<20000){
        total_tax=200 + (Taxable_income - 10000)*(5.0/100);
    }
    else if(Taxable_income>=20001 && Taxable_income<30000){
        total_tax=1200 + (Taxable_income-20000)*(7.0/100);
    }
    else if(Taxable_income>=30001 && Taxable_income<40000){
        total_tax=1900 + (Taxable_income-30000)*(10.0/100);
    }
    else{
        total_tax=2900 + (Taxable_income-40000)*(15.0/100);
    }
    return total_tax;
}
float due_tax(float total_tax, float tax_paid){
    long int Tax_due;
    Tax_due = total_tax - tax_paid;
    return Tax_due;
}

 

 


int main(){
    float total_income, tax_paid, numOfDepndnts, Taxable_income, total_tax, Tax_due, refund;
    cout<<"Enter total income:  ";
    cin>>total_income;
    cout<<"Enter how much tax should uh paid:  ";
    cin>>tax_paid;
    cout<<"Enter total number of dependents:  ";
    cin>>numOfDepndnts;
    cout<<"\n""\n""\n";
    cout<<"\t""\t""Tax Calculations""\t""\t"<<endl;
    cout<<"\t""\t""________________""\t""\t";
    cout<<"\n""\n""\n";
    
    Taxable_income=Tax_income(total_income,numOfDepndnts);                    //for taxable income
    cout<<"Taxable Income: "<<Taxable_income<<endl;
    
    cout<<"\n""\n""^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^""\n""\n";
    
    total_tax=tax_total(Taxable_income);
    cout<<"Total tax:  "<<total_tax;
    
    cout<<"\n""\n""^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^""\n""\n";
    
    Tax_due=due_tax( total_tax, tax_paid);                                     //for due tax
    cout<<"Due Tax:  "<<Tax_due;
    
    cout<<"\n""\n""^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^""\n""\n";
    
    if (Tax_due<0){
        refund = abs( Tax_due );
        cout<<"Amount Refunded: "<<refund<<endl;
    }
    else{
        cout<<"Due Tax: "<<Tax_due;
    }
    return 0;
}
