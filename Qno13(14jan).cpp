
    

#include <iostream>  

#include <fstream>
using namespace std;  

void printHis(int []);

void generate_freq(ifstream& , int []);  

int check(char let){

int num = int(let);

if (num >= 65 && num <= 90){

return num-65;

}

else if(num >= 97 && num < 123){

return num-97;

}

return 27;

}



void generate_freq(ifstream& alpha , int lst[26]){

char ch;

while(alpha.get(ch)){

int ch1 = check(ch);

if (ch1 != 27){

lst[ch1]++;

}

}

return ;

}



void printHis(int l[26]){

    for (int i=0 ; i < 26; i++){
        cout << char(65+i) <<","<<char(97+i)<< char(124);

    for(int j=0 ; j < l[i] ; j++){
	   cout << "*";

   }    

   cout << endl;

 } 

    cout<<" |";
    cout << "_______________";

   return;

}





int main(){

   int arr[26]={0};

    ifstream alphabet;

    alphabet.open("mytextfile.txt");

    if(alphabet.fail()){

    cout << "error in opening the file";

}

    generate_freq(alphabet, arr);

    printHis(arr);

   alphabet.close();

return 0;



}


