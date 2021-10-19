#include <iostream> 
using namespace std;

class Person
{
	protected:
		string name;
		int age;
		string gender;
		string max_education;
	public:
		Person()
		{
			name="\0";
			age=0;
			gender="\0";
			max_education="\0";
		}
		~Person()
		{
			name='\0';
			age=0;
			gender='\0';
			max_education='\0';
		}
		virtual void get_details()
		{
			cout<<endl<<"Enter Name: ";
			getline(cin, name);
			cout<<endl<<"Enter Age: ";
			cin>>age;
			cout<<endl<<"Enter Gender: ";
			getline(cin, gender);
			cout<<endl<<"Enter Max. Education: ";
			getline(cin, max_education);
		}
		virtual void print_details()
		{
			cout<<endl<<"Name of person: "<<name;
			cout<<endl<<"Age of person: "<<age;
			cout<<endl<<"Gender of person"<<gender;
			cout<<endl<<"Max. Education of person: "<<max_education;
		}
};

class Teacher: public Person
{
	private:
		string subject;
		int experience;
		float salary;
	public:
		Teacher()
		{
			subject="\0";
			experience=0;
			salary=0.0;
		}
		~Teacher()
		{
			subject='\0';
			experience=0;
			salary=0.0;
		}
		void get_details()
		{
			cout<<endl<<"Enter Details for teacher: ";
			Person::get_details();
			cout<<endl<<"Enter Subject Teacher teaches: ";
			getline(cin, subject);
			cout<<endl<<"Enter Experience of Teaching (in Years): ";
			cin>>experience;
			cout<<endl<<"Enter Salary: ";
			cin>>salary;
		}
		void print_details()
		{
			cout<<endl<<"Name of Teacher: "<<name;
			cout<<endl<<"Age of Teacher: "<<age;
			cout<<endl<<"Gender of teacher: "<<gender;
			cout<<endl<<"Max. Education Of Teacher:"<<max_education;
			cout<<endl<<"Subject teacher taught: "<<subject;
			cout<<endl<<"Experience of Teaching (Years): "<<experience;
			cout<<endl<<"Salary of teacher: "<<salary;
		}
};

class Student: public Person
{
	private:
		string course;
		float fee;
	public:
		Student()
		{
			course="\0";
			fee=0.0;
		}
		~Student()
		{
			course='\0';
			fee=0.0;
		}
		void get_details()
		{
			cout<<endl<<"Enter Details for Student: ";
			Person::get_details();
			cout<<endl<<"Enter Course of Student: ";
			getline(cin, course);
			cout<<endl<<"Enter Fee of Student (in Rs.): ";
			cin>>fee;
		}
		void print_details()
		{
			cout<<endl<<"Name of Student: "<<name;
			cout<<endl<<"Age of Student: "<<age;
			cout<<endl<<"Gender of Student: "<<gender;
			cout<<endl<<"Max. Education Of Student:"<<max_education;
			cout<<endl<<"Course of Student: "<<course;
			cout<<endl<<"Fee of Student: "<<fee;
		}
};

int main()
{
	Person *p1;
	p1=student& s1;
	p1.get_details();
	p1.print_details();
	delete p1;
	
	return 0;
}