#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
class Fraction
{
    private:
       int numer;
       int denom;
       int gcd(int n , int m=1);

    public:
       Fraction(int numer, int denom);
       Fraction(double value);
       Fraction();
       Fraction(const Fraction& fract);
       operator double();
       const Fraction operator+()const;
       
       Fraction& operator++();
       Fraction& operator--();
       const Fraction operator++(int);
       const Fraction operator--(int);
       Fraction& operator=(const Fraction& right);


};
Fraction::Fraction(int num, int den){
    numer=num;
    denom=den;
}
Fraction::Fraction(double value){
    denom=1;
    value*=10.0;
    denom*=10;
}
Fraction::Fraction(){
    numer=0;
    denom=1;

}
Fraction::Fraction(const Fraction& fract)
:numer(fract.numer),denom(fract.denom){

}
Fraction::operator double(){
    double num=static_cast<double>(numer);
    return (num/denom);
}
const Fraction Fraction::operator+()const
{
    Fraction temp(+numer,denom);
    return temp;
}
Fraction& Fraction::operator++()
{
    numer=numer +denom;
    return (*this);

}
Fraction& Fraction::operator--()
{
    numer=numer-denom;
    return (*this);

}
const Fraction Fraction::operator++(int)
{
    Fraction temp(numer, denom);
    ++(*this);
    return temp;
}
const Fraction Fraction::operator--(int)
{
    Fraction temp(numer,denom);
    --(*this);
    return temp;
}
Fraction& Fraction::operator=(const Fraction& right)
{
    if(*this=right)
    {
        numer=right.numer;
        denom=right.denom;
    }
    return *this;
}
int Fraction::gcd(int n, int m)
{
    int gcd=1;
    for(int k=1;k<=n&& k<=m; k++)
    {
        if(n%k==0&&m%k==0)
        {
            gcd=k;
        }

    }
    return gcd;
}


int main(){
    Fraction fract1(2,3);
    cout<<"fract:"<<fract1<<endl;
    cout<<fract1<<endl;
    Fraction fract3 (3, 4);
Fraction fract4 (4, 5);
Fraction fract5 (5, 6);
Fraction fract6 (6, 7);
cout << "fract3: " << fract3 << endl;
cout << "fract4: " << fract4 << endl;
cout << "fract5: " << fract5 << endl;
cout << "fract6: " << fract6 << endl << endl;
//++fract3;
//--fract4;
//fract5++;
//fract6--’;
cout << "Result of ++fract3: " << fract3 << endl;
cout << "Result of --fract4: " << fract4 << endl;
cout << "Result of fract5++: " << fract5 << endl;
cout << "Result of fract6--: " << fract6 << endl << endl;


    return 0;
}
