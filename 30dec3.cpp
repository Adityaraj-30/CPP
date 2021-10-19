# include <iostream>
int main(){
char ch = 'A';
for (int i = 0; i<26; i++)
   std::cout << char(int(ch)+i)<< '\t';
return 0;
}

