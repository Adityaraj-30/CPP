
#include <iostream>
#include<cmath>
using namespace std;

bool check_prime(int num){

    bool flag=true;

    for(int i = 2; i <= sqrt(num) ; i++) {

       if(num % i == 0) {

          flag = false;

          break;

       }

    }

    return flag;
}

int main() {
	int n,m=0;
	cout <<"How many prime numbers do you want to print? : ";
	cin >>n;
	for ( int i=2;i<=10000;++i)
	{
		if (check_prime(i)==1&&m<n)
		{
			m+=1;
			cout <<i<<'\t';
		}
	}
	return 0;
}
