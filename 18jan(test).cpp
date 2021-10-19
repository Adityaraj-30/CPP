#include<iostream>
using namespace std;

class Account{
	private:
		long accNumber;
		double balance;
		
	public:
	    Account(double bal);
		void checkBalance()const;
		void deposit(double amount);
		void withdraw(double amount);	
};
Account::Account(double bal);
double bal;
bool balance(bal){
	if(bal<0.0){
		cout<<"Balance is negative";
		return (false);
	}
	else{
		accNumber=1000001;
		cout<<"Account"<<accNumber<<"is opened and Balance is RS "<<balance<<endl<<endl;
		
	}
}
void Account::checkBalance()const
{
	cout<<"Account1 :"<<accNumber<<endl;
	cout<<"Transaction :balance check Balance is RS "<<balance<<endl<<endl;
	
}
void Account::deposit(double ammount){
	if (amount>0.0){
		balance+= amount;
		cout<<"Account1"<<accNumber<<endl;
		cout<<"Transaction :deposit of RS"<<amount<<endl;
		cout<<"New balance :RS "<<amount<<endl;
		cout<<"New balance :RS"<<balance<<endl;
}
	else{
		cout<<"Transaction end"<<endl;
	}
	
}
void Account::withdraw(double amount)
{
	if(amount>balance){
		amount=balance;
	}
	balance-=amount;
	cout<<"Account1 :"<<accNumber<<endl;
	cout<<"Transaction withdraw of RS "<<amount<<endl;
	cout<<"New balance : is RS"<<balance<<endl;
	
}

int main(){
	Account acc1(5000);
	acc1.deposit(200);
	acc1.checkBalance();
	acc1.withdraw(1000);
	acc1.deposit(100);
	return 0;
	
}
