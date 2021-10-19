#include<iostream>
using namespace std;
 class Demo{
 	static int count;
 	int x,y;
 	public:
 		Demo()
 		{
 			count ++;
 		
		}
		~Demo()
		{
			count --;
			
		}
		static void print()
		{
			cout<<"Total active object:"<<endl;
			cout<<count<<endl;
			return ;
		}
 };
 int Demo::count=0;
 
 int main(){
 	Demo d1;
 	cout<<"Count after first object\n";
 	d1.print();
 	Demo::print();
// 	d2.print();
// 	d3.print();
 	
 }
 
