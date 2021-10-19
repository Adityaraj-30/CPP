#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin("readfile.txt");
    ofstream foutV("fileV.txt");
    ofstream foutD("fileD.txt");
    ofstream foutR("fileRest.txt");
    
    string word;
    
    if(!fin)
    {
        if(!foutD || !foutR || !foutV)
        cout << "\nError 100: opening file for writing.";
        exit(100);
        cout << "\nError 101: opening file for reading.";
        exit(101);
    }

    while(!fin.eof())
    {
        fin >> word;
        
        if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
            foutV << word << " ";
        else if(isdigit(word[0]))
            foutD << word << " ";
        else
            foutR << word << " ";
    }

    fin.close();
    foutD.close();
    foutR.close();
    foutV.close();

    if(fin.fail() || foutD.fail() || foutR.fail() || foutV.fail())
    {
        cout << "\nError 102 :Closing the  files.";
        exit(102);
    }

return 0;
}
