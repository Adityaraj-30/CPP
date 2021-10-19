

#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){
	ifstream  in_file;
	char ch;
	ofstream out_file;
	in_file.open("array(sum).cpp");
	if(!in_file){
		cout<<" Error100: opening a file "<<endl;
		exit(100);
	}
	out_file.open("prog_copy");
	if(!out_file){
		cout<<"Error100:opening a file"<<endl;
	}
	while(in_file.get(ch))
	       out_file.put(ch);
	       
	out_file.close();
	in_file.close();
		return 0;      
}
`4cqa
