# include <iostream>
using namespace std;
class person{
	public:
	virtual	void get(){
			cout<<"It is person ";
		}
	virtual	void print(){
			cout<<"It is base";
		}
};
class student:public person{
    string s1,s2,s3,s4;
	public:
		void get();
		void print();
		
};
void student::get()
{
	cout<<"\nEnter student name = ";
	getline(cin,s1);
	cout<<"\nEnter course name of student = ";
	getline(cin,s2);
	cout<<"\nEnter year of student = ";
	getline(cin,s3);
	cout<<"\nEnter roll no. student = ";
	getline(cin,s4);
}
void student::print()
{
	cout<<s1<<"\t"<<s2<<"\t"<<s3<<"\t"<<s4;
}
class teacher :public person{
	string a1,a2,a3;
	public:
		void get();
		void print();
};
void teacher::get()
{
	cout<<"\nEnter teacher name = ";
	getline(cin,a1);
	cout<<"\nEnter teacher's subject = ";
	getline(cin,a2);
	cout<<"\nEnter teacher's experiance = ";
	getline(cin,a3);
}//getting teacher information
void teacher::print()
{
	cout<<a1<<"\t"<<a2<<"\t"<<a3;
}
int main()
{
	person *p=new person;
	student s;
	p=&s;
	p->get();
	p->print();
	cout<<endl;
	teacher t;
	p=&t;
	p->get();
	p->print();
	
}
