#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <cstdio>


using namespace std;

class Box
{
  private:
	int length, breadth, height;

  public:
	double surfacearea();
	void print();
	double volume();
	Box operator++(int n);
	Box operator++();
	Box operator--(int n);
	Box operator--();
	Box operator=(Box b1);
	friend Box operator==(Box b1, Box b2);
	int check(); //returns 1 if cube and 0 for cuboid/
	void Boxget();
};

void Box::Boxget()
{
	cout << "\nEnter the value of Length , Breadth and Height......" << endl;
	cin >> length >> breadth >> height;
}

int Box::check()
{
	if (length == breadth == height)
		return 1;
	else
		return 0;
}

double Box::surfacearea()
{
	if (check() == 0)
		return (2 * ((length * breadth) + (breadth * height) + (height * length)));
	else
		return (6 * length * length);
}
double Box::volume()
{
	return (length * breadth * height);
}
Box Box::operator++()
{
	length++;
	breadth++;
	height++;
	return (*this);
}
Box Box::operator--(int n)
{
	length--;
	breadth--;
	height--;
	return (*this);
}
Box Box::operator++(int n)
{
	length++;
	breadth++;
	height++;
	return (*this);
}
Box Box::operator--()
{
	--length;
	--breadth;
	--height;
	return (*this);
}

Box Box::operator=(Box b1)
{
	length = b1.length;
	breadth = b1.breadth;
	height = b1.height;
	return (*this);
}
Box operator==(Box b1, Box b2)
{
	if ((b1.length == b2.length) && (b1.breadth == b2.breadth) && (b1.height == b2.height))
		cout << "The two boxes have equal dimensions";
	else
		cout << "The two boxes are unequal";
	
}
void Box::print()
{
	cout << endl;
	cout << "\nThe  length is " << length << endl;
	cout << "\nThe breadth is " << breadth << endl;
	cout << "\nThe height is " << height << endl;
}

int main()
{
	
	int d = 1;
	do
	{
		Box obj,b2;
		obj.Boxget();
		cout << "\n1) Enter 1 to show volume" << endl
			 << "2) For surface area" << endl
			 << "3) To increment using postfix" << endl
			 << "4) To increment using prefix" << endl;
		cout << "5) To decrement using postfix" << endl
			 << "6) To decrement using prefix"
			 << "7) To check equality of two boxes" << endl;
		cout << "8) To assign values to a box" << endl
			 << "9) To check if it is a cube or cuboid" << endl
			 << "Enter 10 to print current box status" << endl;
		cout << "Enter 0 to quit" << endl;
		cin >> d;
		switch (d)
		{
		case 1:
			cout << "\nThe volume is " << obj.volume() << endl;
			break;
		case 2:
			cout << "\nThe surface area is " << obj.surfacearea() << endl;
			break;
		case 3:
			cout << "\nIncrement using postfix";
			obj++;
			obj.print();
			break;
		case 4:
			cout << "\nIncrement using prefix";
			++obj;
			obj.print();
			break;
		case 5:
			cout << "\nDecrement using postfix";
			obj--;
			obj.print();
			break;
		case 6:
			cout << "nDecrement using prefix";
			--obj;
			obj.print();
			break;
		case 7:
			cout << "\nEnter the dimensions of other box";
			Box obj2;
			obj2 == obj;
			obj2.print();
			break;
		case 8:
			cout << "\nTo assign values to a box object" << endl;
			b2 = obj;
			b2.print();
			break;
		case 9:
			if (obj.check() == 1)
				cout << "\nIt is a cube " << endl;
			else
				cout << "\nIt is a cuboid." << endl;

			break;
		case 10:
			obj.print();
		}
		cout << "Enter 0 to quit" << endl;
		cin >> d;
		
	} while (d != 0);
	
	return 0;
}