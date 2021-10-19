/*
	Name: 30shapes 
	Author:Aditya Raj 
	Date: 20-02-21 22:16
	Description: 
*/


#include <iostream> 
#include <cmath>
using namespace std;

class Shapes
{
	public:
		static float pi;
		Shapes()
		{
			pi=22/7;
		}
		virtual float area()=0;
};

class TwoDim : public Shapes
{
	public:
		float ar;
		float parameter;
		float area();
		void print_area()
		{
			cout<<endl<<"Area of Two Demenstional Shape: "<<ar;
		}
		void print_parameter()
		{
			cout<<endl<<"Parameter of Two Demenstional Shape: "<<parameter;
		}
};

class Triangle : public TwoDim
{
	private:
		float s1, s2, s3;
	public:
		void get_tri()
		{
			cout<<endl<<"Enter 3 sides of triangle: ";
			cin>>s1>>s2>>s3;
		}
		float permet()
		{
			TwoDim::parameter=s1+s2+s3;
		}
		float area()
		{
			TwoDim::ar=s1*s2*s3;
		}
};

class Rectangle : public TwoDim
{
	private:
		float len, brth;
	public:
		void get_rec()
		{
			cout<<endl<<"Enter Length of Rectangle: "<<len;
			cin>>len;
			cout<<endl<<"Enter Breadth of Rectangle: "<<brth;
			cin>>brth;
		}
		float permet()
		{
			TwoDim::parameter= 2*(len+brth);
		}
		float area()
		{
			TwoDim::ar=len*brth;
		}
};

class Circle : public TwoDim
{
	private:
		float radius;
	public:
		void get_cir()
		{
			cout<<endl<<"Enter Radius of Circle: ";
			cin>>radius;
		}
		float permet()
		{
			TwoDim::parameter= 2*pi*radius;
		}
		float area()
		{
			TwoDim::ar= pi*radius*radius;
		}
};

class ThreeDim : public Shapes
{
	public:
		float ar;
		float volume;
		float area();
		void print_area()
		{
			cout<<endl<<"Area of Three Demenstional Shape: "<<ar;
		}
		void print_volume()
		{
			cout<<endl<<"Volume of Three Demenstional Shape: "<<volume;
		}
};

class Cone : public ThreeDim
{
	private:
		float height;
		float radius;
	public:
		void get_cone()
		{
			cout<<endl<<"Enter Height of Cone: ";
			cin>>height;
			cout<<endl<<"Enter Radius of surface of Cone: ";
			cin>>radius;
		}
		float area()
		{
			ThreeDim::ar= ( pi*radius*(radius+sqrt((height*height)+(radius*radius))));
		}
		float volume()
		{
			ThreeDim::volume=pi*radius*radius*height/float(3);
		}
};

class Cube : public ThreeDim
{
	private:
		float edge_len;
	public:
		void get_cube()
		{
			cout<<endl<<"Enter Edge Length of Cube: ";
			cin>>edge_len;
		}
		float area()
		{
			ThreeDim::ar=6*edge_len*edge_len;
		}
		float volume()
		{
			ThreeDim::volume=edge_len*edge_len*edge_len;
		}
};

class Sphere : public ThreeDim
{
	private:
		float radius;
	public:
		void get_sphere()
		{
			cout<<endl<<"Enter Radius of Sphere: ";
			cin>>radius;
		}
		float area()
		{
			ThreeDim::ar=4*pi*radius*radius;
		}
		float volume()
		{
			ThreeDim::volume=(4/3)*pi*radius*radius*radius;
		}
};
int main(){
	return 0;
}
