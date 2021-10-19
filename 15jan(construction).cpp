#include<iostream>

 

 

 

using namespace std;
class Fraction{
    
          int numerator;
        int denominator;
    
    public:
        Fraction();
        Fraction(int n);
        Fraction(int n, int d);
        void store(int n, int d);
        void print() const;
};
Fraction::Fraction(){
    numerator=0;
    denominator=1;
}
Fraction::Fraction(int n, int d){
    numerator =n;
    denominator=d;
}
int main(){
    Fraction f1;
    Fraction f2(2);
    Fraction f3(2,3);
    return 0;
}
