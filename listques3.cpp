/*
	Name: listques3 
	Author: Aditya Raj
	Date: 25-02-21 18:26
	Description: Create a class Set that manages a list of integers and performs all basic functions that can be performed on sets (such as Union, intersection etc) Use operator overloading and copy constructor.k,
*/
#include<iostream>
#include<cmath>
#define MAX 10
using namespace std;

class Set
{
    private:
        int arr[MAX], arrsize;
    public:
        Set() //Default Constructor
        {
            arrsize=0;
        }
        Set(Set &sets); //Copy Constructor
        void getList();
        void printList();
        void operator+(Set &sets); //Union
        void operator-(Set &sets); //Difference
        void operator^(Set &sets); // Intersection 
     

};
Set::Set(Set &sets)
{
    for(int i=0; i<arrsize; i++)
    {
        arr[i]=sets.arr[i];
    }
}
void Set::getList()
{
    cout<<"\nEnter Size of Set :";
    cin>>arrsize;
    if(arrsize==0)
	{
		cout<<"\nEmpty Set....\n"<<"\nPlease enter some value....";
	}
	else
	{
	   cout<<"\nEnter intergers in List1 :";
       for(int i=0; i<arrsize; i++)
        {
            cin>>arr[i];
        }
   }
   return ;
}
void Set::printList()
{
	cout<<"\nList is :";
    for(int i=0; i<arrsize; i++)
        {
            cout<<arr[i]<<" , ";
        }
    return ;
}
void Set::operator+(Set &sets)
{
    int flag;
    cout<<"\nUnion is:";
    cout<<"{";
    for(int i=0; i<arrsize; i++)
    {
        cout<<arr[i]<<" , ";
    }
    for(int j=0; j<sets.arrsize; j++)
    {
        flag=0;
        for(int i=0;i<arrsize; i++)
        {
            if(arr[i]==sets.arr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
            {
                cout<<sets.arr[j]<<" , ";
            }
    }
    cout<<"}";
    return ;

}
void Set::operator-(Set &sets)
{
    cout<<"\nDifference is :";
    cout<<"{";
    int flag;
    for(int i=0; i<arrsize; i++)
    {
       flag=0;
       for(int j=0; j<sets.arrsize; j++)
       {
            if(arr[i]==sets.arr[j])
               	{
                  flag++;
                  break;
                }
        } 
        if(flag==0)
           {
           		
                cout<<arr[i]<<" , ";
           }
    }
    
    cout<<"}";
    return ;
        
}
void Set::operator^(Set &sets)
{
    	int flag=0;
	cout<<"\nIntersection is :";
	cout<<"{";
	for(int i=0;i<arrsize;i++)
	{
		flag=0;
		for(int j=0;j<sets.arrsize;j++)
		{
			if(arr[i]==sets.arr[j])
			{
				flag=1;
				break;
			}
			
		}
		if(flag==1)
		{
			cout<<arr[i]<<" , ";
		}
		
	}
	cout<<"}";
	return ;
}
       

int main()
{
	Set set1, set2;
	set1.getList();
	set2.getList();
	set1+set2;
	set1-set2;
    set1^set2;

	return 0;
}