/*
	Name: 22matrix 
	Author: Aditya Raj
	Date: 15-02-21 23:01
	Description: 
*/

#include <iostream>
using namespace std;
class matrix{
    private :int row;
            int column;
             int a[50][50];
             int b[50][50];
    public:matrix(int r,int c);
        void getmatrix();
        void print();
        void add(matrix m);
        void sub(matrix m);
        void prod(matrix m);
        void tran();
};
matrix:: matrix(int r,int c)
{
    row=r;
    column=c;
}
void matrix::getmatrix(){
    
    for(int i=0;i<row;i++)
     {
         for(int j=0;j<column;j++)
         {
            cout<<"enter element in  "<<i<<','<<j<<" = ";
            cin>>a[i][j];
        }
     }
    
  
    
}//get matrix
void matrix::print()
{  
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
        cout<<a[i][j]<<"\t";
         }
         cout<<endl;
    }
    
}//printing
void matrix::add(matrix m)
{ if((row==m.row)&&(column==m.column))
  {
          for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            b[i][j]=a[i][j]+m.a[i][j];
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
  }
  else
  cout<<"addition of given matrixes does not exist ";    
}//addition
void matrix::sub(matrix m)
{ if((row==m.row)&&(column==m.column))
  {
          for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            b[i][j]=a[i][j]-m.a[i][j];
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
  }
  else
    cout<"subtraction of given matrixes does not exist ";        
}//subtraction
void matrix::prod(matrix m)
{ if(column==m.row)
  {
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<m.column;j++)
        {
            for(int k=0;k<column;k++)
            {
                b[i][j]+=a[i][k]*m.a[k][j];
            }
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
  }
else 
   cout<<"multilication of given matrix does not exist ";    
    
    
}//multiplication
void matrix::tran()
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            b[i][j]=a[j][i];
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    
}//transpose
void menu()
{
    cout<<"choice 1 -Addition "<<endl;
    cout<<"choice 2 -Subtraction "<<endl;
    cout<<"choice 3 -Product "<<endl;
    cout<<"choice 4 -Transpose"<<endl;
}
 
int main(){
    int x,y,z,w,choice;
    cout<<"\nEnter number of rows for matrix 1 = ";
    cin>>x;
    cout<<endl;
    cout<<"\nEnter number of column for matrix 1 =";
    cin>>y;
    cout<<endl;
    cout<<"\nEnter number of rows for matrix 2 = ";
    cin>>z;
    cout<<endl;
    cout<<"\nEnter number of column for matrix 2 = ";
    cin>>w;
    cout<<endl;
    matrix m1(x,y);
    matrix m2(z,w);
    menu();
    cout<<"\nEnter your choice";
    cin>>choice;
    cout<<"\nEnter first matrix ";
    m1.getmatrix();
    cout<<endl;
    m1.print();
    cout<<endl;
    cout<<"\nEnter second matrix ";
    m2.getmatrix();
    cout<<endl;
    m2.print();
    cout<<endl;
  switch(choice)    
   {  
     case 1:cout<<"\nThe addition of matrixes are "<<endl;
            m1.add(m2);break;
     case 2:cout<<"\nThe subtraction of matrixes are "<<endl;
            m1.sub(m2);break;
     case 3:cout<<"\nThe product of matrixes are "<<endl;
          m1.prod(m2);break;
     case 4:cout<<"\nThe transpose of matrixes are  "<<endl;
           m1.tran();break;                       
   } 
        
}
