#include<iostream>
using namespace std;
class Operation
{
    private:
        int i;
        int j;
    public:
	    void store(int i, int j);
	    void add(const Operation& sum);
	    void sub(const Operation& minus);
	    void prod(const Operation& mul);
	    void division(const Operation& divide);
	    void print()const;
};
void Operation::store( int ith , int jth)
{
	i=ith;
    j=jth;
	return ;
}

void Operation::add(const Operation& sum){
    int sum[3][3];
    
    int arr1[3][3]={{4,4,4},{5,5,5},{6,6,6}};
    int arr2[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
             sum[i][j]=arr1[i][j]+arr2[i][j];
           
           }
        cout<<endl;
    }
    cout<<"The value of addition is"<<endl;
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return ;
}
void Operation::sub(const Operation& minus){
    int sub[3][3];
    
    int arr1[3][3]={{4,4,4},{5,5,5},{6,6,6}};
    int arr2[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
             sub[i][j]=arr1[i][j]-arr2[i][j];
           
           }
        cout<<endl;
    }
    cout<<"The value of substraction is"<<endl;
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }
    return ;
}
void Operation::prod(const Operation& mul){
    int mul[3][3];
    
    int arr1[3][3]={{4,4,4},{5,5,5},{6,6,6}};
    int arr2[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
            mul[i][j]=arr1[i][j]*arr2[i][j];
           
           }
        cout<<endl;
    }
    cout<<"The value of multiplication is"<<endl;
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return ;
}
void Operation::print()const
{
	cout<<i<<j;
	return ;
}
int main(){
	int real1,imaginary1, real2,imaginary2;
	cout<<"Enter the value of real part of first number:"<<endl;
	cin>>real1;
	cout<<"\nEnter the value of imaginary part of first number:"<<endl;
	cin>>imaginary1;
	cout<<"\nEnter the value of real part of second number:"<<endl;
	cin>>real2;
	cout<<"\nEnter the value of imaginary part of second number:"<<endl;
	cin>>imaginary2;
	
	Operation c1, c2;
	c1.store(real1, imaginary1);
	cout<<"\ncomplex number1:"<<endl;
	c1.print();
	cout<<endl;
	
	c2.store(real2, imaginary2);
	cout<<"\ncomplex number2:"<<endl;
	c2.print();
	cout<<endl;
	
	c1.add(c2);
	cout<<"\nThe sum of the complex number is:"<<endl;
	c1.print();
	
 
    c1.store(real1,imaginary1);
    c1.sub(c2);
    cout<<"\n\nThe difference of complex number is:"<<endl;
    c1.print();
 
    c1.store(real1,imaginary1);
    c1.prod(c2);
    cout<<"\n\nThe product of complex number is:"<<endl;
    c1.print();  
 
    c1.store(real1,imaginary1);
    c1.division(c2);
    cout<<"\n\nThe division of complex number is:"<<endl;
    c1.print(); 
 
return 0;
 
}