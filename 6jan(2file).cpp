

#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){
	ifstream  in_file;
	char ch;
	int cnt=0;
	in_file.open("array(sum).cpp");
	if(!in_file){
		cout<<" Error100: opening a file "<<endl;
		exit(100);
	}
	while(in_file){
		in_file>>ch;
		cnt++;
		cout<<" The character: "<<cnt;
	}
	       
	       
	       
	in_file.close();
	if(in_file.fail()){
		cout<<" Error102: closing the file "<<endl;
		exit(102);
	} 
	return 0;      
}
