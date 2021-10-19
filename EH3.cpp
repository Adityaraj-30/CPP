#include<iostream>

using namespace std;

class Error{
	public:
		virtual void errMsg(){
			cout<<"Error: Type error\n";
			
		}
};
class Arthmetic:public Error{
	public:
		virtual void errMsg(){
			cout<<"Error: Type Arthmetic\n";
			}
};
class DivByZero:public Arthmetic{
	public:
		void errMsg(){
			cout<<"Error: Divisor-Divide by Zero\n";
		}
};
class BadOpr:public Arthmetic{
	public:
		void errMsg(){
			cout<<"Error: Invalid operator\n";
		}
};
double calculator(char oper, double op1, double op2){
	double result;
	switch(oper){
		case '+': result=op1+op2; break;
		case '-': result=op1-op2; break;
		case '*': result=op1*op2; break;
		case '/':if(op2==0)
		           throw DivByZero();
		           result=op1/op2;
		default : throw BadOpr();
			
	}
	return result;
}

int main(){
	double op1, op2, ans;
	char opr;
	
	cout<<"\nEnter operand 1 ,2 and operator:";
	cin>>op1>>op2>>opr;
	
	try{
		ans= calculator(opr,op1,op2);
		cout<<"\nResult is:"<<ans<<endl;
	}
	catch (Error& error){
		error.errMsg();
		exit(100);
	}
	return 0;
}
