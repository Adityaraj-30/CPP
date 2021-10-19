#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){ 
    string str="943020998877";
    sort(str.begin(), str.end(), smaller<int>());
    cout<<str<<endl;


return 0;
}