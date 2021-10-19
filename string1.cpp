#include<iostream>
#include<string>
using namespace std;

int main(){
    string str, text;
    getline(cin, str);
   // stringstream X(str); 
    while(getline(text," ")){
        cout<<text<<endl;
    }


    return 0;
}

