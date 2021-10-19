#include <iostream>
#include <string>

using namespace std;
int main(){
    string s="EXTRACTION";
    cout<<s.find_first_not_of("AEIOU")<<endl;


    return 0;
}


