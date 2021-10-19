#include<iostream>
using namespace std;
class Fraction{
    private:
        float numerator;
        float denominator;
    public:
        void store(int n , int d);
        friend Fraction add(const Fraction& f1, const Fraction& f2);
        friend void addto(Fraction& f1, Fraction& f2);
        void print()const;    
};

void addto(Fraction& f1, Fraction& f2)
{
    f1.numerator=(f1.numerator*f2.denominator) +(f2.numerator*f1.denominator);
    f1.denominator=(f1.denominator*f2.denominator);
    return ;
}
void Fraction::store(int n, int d)
{
    numerator=n;
    denominator=d;
    return ;
}
void Fraction::print()const
{
	cout<<numerator<<"/"<<denominator;
	return ;
}

int main(){
    int n,d;
    cout<<"Enter num and den"<<endl;
    cin>>n>>d;

    Fraction f1, f2;
    f1.store(n,d), f2.store(n+1,d+1);
    addto(f1, f2);
 
    f1.print();

return 0;
}
