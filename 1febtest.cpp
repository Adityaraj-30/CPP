#include <iostream>
using namespace std;
/*class Temp
{
    int x, y;
    public:
        int xyz();
        char abc();
};
*/
class Demo
{
    static int count;
    int x, y;
    public:
        Demo()
        {
            count ++;
            cout<<"Constructor called"<<endl;
        }
        ~Demo()
        {
            count --;
            cout<<"Destructor is called"<<endl;
        }
        static void print()
        {
            cout<<count<<endl;
        }
};
int Demo::count=0;

int main(){
    Demo d1;
    cout<<"count after first object\n";
    d1.print();
    {
        Demo d2, d3;
        Demo::print();
    }
    Demo::print();
  return 0;
}
