/*
	Name: 27triangles 
	Author: Aditya Raj
	Date: 20-02-21 21:17
	Description: 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <cstdio>
#include <conio.h>


using namespace std;

class Triangle
{
    float v1,v2,v3,h; //float variable
    double Area;
    public:
       Triangle(){
           cout<<"\nDefault construction...."<<endl;
           v1=v2=v3=h=0;
           Area=0.0;
       }
       Triangle(float v1, float v2, float v3)  //parameterised construction
       {
           cout<<"\nInitialising the three side...."<<endl;
           this->v1=v1;
           this->v2=v2;
           this->v3=v3;
           h=0;
           Area=area(v1,v2,v3);
       }
       double area(float s1, float s2, float s3) //calculation function
       {
           cout<<"\nCalculating area with the three sides given...."<<endl;
           
           float s=(s1+s2+s3)/2.0;
 		   float x=sqrt(s*(s-s1)*(s-s2)*(s-s3));
           return x;
       }
       int operator==(Triangle x) // overload == for triangle
       {
           cout<<"\nComparing...."<<endl;
           int a=0;
           if(this->Area==x.Area)
           a=1;
           return a;
       }
       void operator=(Triangle x) //overload = for triangle
       {
           cout<<"\nAssigning value (inside assignment operator function)..."<<endl;
           this->v1=x.v1;
           this->v2=x.v2;
           this->h=x.h;
           this->v3=x.v3;
           Area=x.Area;

       }
       void disp()
       {
           if(v1)
           {
               cout<<"Side1="<<v1<<endl<<"Side2="<<v2<<endl<<"side3="<<v3<<endl;
           }
           cout<<"AREA="<<Area;
       }
};
void menu(Triangle &x)
{
   // clrscr();
    cout<<"\n\n1)Using the dimension of three sides\n";
    cout<<"2)Using Asg(=) operator\n";
    cout<<"3)Using Cmp(==) operator\n";
    char ch;
    ch=getch();
    switch(ch)
    {
        case '1':
        {
            float a,b,c;
            cout<<"\nEnter the three side of triangle....."<<endl;
            cin>>a>>b>>c;
            Triangle t(a,b,c);
            t.disp();
            break;
        }
        case '2':
        {
            cout<<"\nEnter the three sides..."<<endl;
            float a,b,c;
            cin>>a>>b>>c;
            Triangle t(a,b,c);
            x=t;
            x.disp();
            break;
        }
        case '3':
        {
        float a,b,c;
        cout<<"\nEnter the three sides of the first triangle..."<<endl;
        cin>>a>>b>>c;
        Triangle t1(a,b,c);
        cout<<"\nEnter the three side of second triangle..."<<endl;
        cin>>a>>b>>c;
        Triangle t2(a,b,c);
        if(t1==t2)
        {
            cout<<"\nEqual";
        }
        else
        {
           cout<<"\nNot Equal";
        }
        break;
        }
        default:
        {
            exit(101);
        }

    }
    getch();
    menu(x);
}
int main(){
    Triangle x;
    menu(x);
    return 0;
}
