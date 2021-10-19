#include <iostream>
#include <iomanip>
#define maxR 10 
#define maxC 10 

using namespace std;

void setArrData(int a[][maxC],int M,int N)
{
	for(int r=0;r<M;r++)
	{
		for(int c=0;c<N;c++)
		{
			cout<<"Enter the element"<<endl;
			cin>>a[r][c];
		}
	}
}

void printArrData(int a[][maxC],int M,int N)
{
	for(int r=0;r<M;r++)
	{
		for(int c=0;c<N;c++)
			cout<<a[r][c]<<"\t";
		cout<<endl;	
	}
}

double getAverage(int a[][maxC],int M,int N)
{
	double avg=0.0;
	for(int r=0;r<M;r++)
	{
		for(int c=0;c<N;c++)
			avg+=a[r][c];
	}
	avg=avg/(double)(M*N);
	return avg;
}

int findMax(int a[][maxC],int M,int N)
{
	int max=a[0][0];
	for(int r=0;r<M;r++)
	{
		for(int c=0;c<N;c++)
			if(max<a[r][c])
				max=a[r][c];
	}
	return max;
}

int main()
{
	int m,n;
	cout<<"Enter the rows and column of 2D array respectively"<<endl;
	cin>>m>>n;
	const int M=m;
	const int N=n;
	int a[maxR][maxC];
	setArrData(a,M,N);
	printArrData(a,M,N);
	cout<<"Average of integers is:"<<getAverage(a,M,N)<<endl;
	cout<<"Greatest integer is:"<<findMax(a,M,N)<<endl;
	return 1;
}
