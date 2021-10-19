#include<iostream>
#include<conio.h>
using namespace std;
class Setoperation
{
    private:
        int arr, resultarrSize=0;
        
    public:
        Setoperation() //Default Constructor
				{
					resultarrSize=0;
				}
			Setoperation(int resultarr)//Paramerterised Constructor
			{
				resultarrSize=resultarr;
			}	
			
            Setoperation(const Setoperation& Arr) //Copy Constructor
            {
                resultarrSize=Arr.resultarrSize;
                for(int i=0;i<resultarrSize;i++)
                {
                    arr[i]=Arr.arr[i];
                }
            }
        void setUnion(int FirstArr,int FirstArrSize, int SecondArr,int SecondArrSize);
        void setIntersection(int FirstArr,int FirstArrSize, int SecondArr,int SecondArrSize);
        void setDifference(int FirstArr,int FirstArrSize, int SecondArr,int SecondArrSize);
        void setprint(int resultarr, int resultarrSize);
};
void Setoperation::setprint(int *resultarr, int resultarrSize)
{
    if(resultarrSize==0)
	{
		cout<<"\nEmpty Set....\n"<<"\nPlease enter some value....";
	}
	else
	{
	
       for(int i=0; i<resultarrSize; i++)
        {
            cout<<arr[i]<<" , ";
        }
   }
}
void Setoperation::setUnion(int FirstArr,int FirstArrSize, int SecondArr,int SecondArrSize)
{
    int flag=0,resultarr[20],resultarrSize=0;
    for(int i=0; i<FirstArrSize; i++)
    {
        resultarr[i]=FirstArr[i];
        resultarrSize ++;
    } //copy the first array elements to result array//
    for(int i=0; i<SecondArrSize; i++)
    {
        flag=0;
        for(int j=0; j<resultarrSize; j++)
        {
            if(SecondArr[i]==resultarr[j])
            {
            flag=1;
            break;
            }
        } //Toggle a flag if ,if second array element match with result array element
    
    if(flag==0)
       {
        resultarr[resultarrSize]=SecondArr[i];
        resultarrSize ++;
       } //copy the second array element to resultarray,if condition is true//
    }
    setprint(resultarr, resultarrSize);
}
void Setoperation:: setIntersection(int FirstArr,int FirstArrSize, int SecondArr,int SecondArrSize)
{
    int flag=0,resultarr[20], resultarrSize=0;
    for(int i=0; i<SecondArrSize; i++)
    {
        for(int j=0; j<FirstArrSize; j++)
        {
            if(SecondArr[i]==FirstArr[j])
            {
                resultarr[resultarrSize]=SecondArr[i];
                resultarrSize ++;
                break;
            }
        } //compare second array element to first array element//
    } //copy the matched elements to result array//
    setprint(resultarr, resultarrSize);
}
void Setoperation::setDifference(int FirstArr,int FirstArrSize, int SecondArr,int SecondArrSize)
{
    int flag=0,resultarr[20], resultarrSize=0;
    for(int i=0; i<FirstArrSize; i++)
    {
        flag=0;
        for(int j=0;j<SecondArrSize; j++)
        {
            if(FirstArr[i]==SecondArr[j])
            {
                flag=1;
                break;
            }
        } //Toggle a flag if second array element match with result array element//
        if(flag==0)
        {
            resultarr[resultarrSize]=FirstArr[i];
            resultarrSize ++;
        }
    } //copy the second array elements to result array, if condition is true//
    setprint(resultarr,resultarrSize);
}


int main(){
    int FirstArr[10];
    int SecondArr[10];
    int FirstArrSize, SecondArrSize,flag=0, obj1,resultarrSize,A;
    cout<<"\nEnter No. of Element to be in the First Array:"<<endl;
    cin>>FirstArrSize;
     if(FirstArrSize!=0)
        {
	        FirstArrSize=Setoperation(resultarrSize);
	        FirstArrSize.inputArray();
           // obj1=Setoperation(FirstArrSize);  //Storing A in ob1 using copy constructor
        }
    cout<<"\nEnter No. of Element to be in the Second Array:"<<endl;
    cin>>SecondArrSize;
    cout<<"\nEnter"<<SecondArrSize<<"Elements of Second Array"<<endl;
    for(int i=0; i<SecondArrSize; i++)
    {
        cin>>SecondArr[i];
    }
    Setoperation s;
    cout<<"Union is:"<<endl;
    s.setUnion(FirstArr, FirstArrSize, SecondArr, SecondArrSize);
    cout<<"Intersection is:"<<endl;
    s.setIntersection( FirstArr, FirstArrSize,  SecondArr, SecondArrSize);
    cout<<"Difference is:"<<endl;
    s.setDifference( FirstArr, FirstArrSize,  SecondArr, SecondArrSize);

return 0;
}