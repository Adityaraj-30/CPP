#include <iostream>
using namespace std;
 
int main () {
   // an array with 10 elements.
   int *i;
  // int (*balance)=A;
   int balance[10 ] = {10,2,3,17,3,4,6,8,9,50};
   i=balance;
   
 
 
   // output each array element's value 
   cout << "Array values using pointer " << endl;
   
   for (int j = 0; j < 10; j++ ){
      
      cout << (*i++ )<< endl;
   }
  return 0;
}
   
