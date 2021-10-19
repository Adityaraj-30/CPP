/*
	Name: merge2array 
	Author: Aditya Raj
	Date: 14-02-21 23:00
	Description: 
*/

#include<iostream>
using namespace std;
int main(){
    int arr1[2][2], arr2[2][2], arr3[4][2];
    cout<<"Enter the elements of first array:"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the elements of second array:"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>arr2[i][j];
        }
    }
    
    for(int i=0;i<4;i++)
    {
        if(i<2)
        for(int j=0; j<2; j++)
        {
            arr3[i][j]=arr1[i][j];
        }
        else
        for(int j=0;j<2;j++)
        {
            arr3[i][j]=arr2[i][j];
        }
    }
    cout<<"The elements of merged array is:"<<endl;;
    for(int i=0;i<4;i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
