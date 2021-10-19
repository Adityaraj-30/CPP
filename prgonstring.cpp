/*
	Name: prgonstring
	Author: Aditya Raj
	Date: 04-02-21 22:09
	Description: 
*/

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdio>

using namespace std;

void switch_1(char arr1[],char arr2[]);
void switch_2(char arr1[],char arr2[]);
void switch_3(char arr1[],char arr2[]);
void switch_4(char arr1[],char arr2[]);
void switch_5(char arr1[],char arr2[]);
void switch_6(char arr1[],char arr2[]);
void switch_7(char arr1[],char arr2[]);
void switch_8(char arr1[],char arr2[]);
void switch_9(char arr1[],char arr2[]);

int main() {
    int n=1;
    char arr1[80];
    char arr2[80];
    cout << "Enter first input string : ";
    cin.getline(arr1,80);
    cout << "Enter second input string : ";
    cin.getline(arr2,80); 
    cout << "1 : Address of each string in the memory.\n";
    cout << "2 : Concatenate 2 strings without using strcat.\n";
    cout << "3 : Concatenate 2 strings using strcat.\n";
    cout << "4 : Compare 2 strings.\n";
    cout << "5 : Length of the strings.\n";
    cout << "6 : Convert all characters to upper case.\n";
    cout << "7 : Convert all characters to lower case.\n";
    cout << "8 : Calculate the number of vowels.\n";
    cout << "9 : Reverse the string.\n";
    cout << "Enter a number corresponding to what you want to perform on the string : ";
    cin >> n;         
    switch (n)
    {
        case 1 : switch_1(arr1,arr2);break;
        case 2 : switch_2(arr1,arr2);break;
        case 3 : switch_3(arr1,arr2);break;
        case 4 : switch_4(arr1,arr2);break;
        case 5 : switch_5(arr1,arr2);break;
        case 6 : switch_6(arr1,arr2);break;
        case 7 : switch_7(arr1,arr2);break;
        case 8 : switch_8(arr1,arr2);break;
        case 9 : switch_9(arr1,arr2);break;
        default : cout<<"Sorry, no function corresponding to "<<n<<" :(";
    }
}

void switch_1(char arr1[],char arr2[]) {
    int i=0;
    while (arr1[i]!='\0') {
    cout <<endl<<"The address of "<<i<<" th index of 1st string is "<<(void*)&arr1[i];
    i++;
    }

    return;
}

void switch_2(char arr1[],char arr2[]) {
    string s1=arr1,s2=arr2;
    string s3=s1+s2;
    cout << s3;
    return;
}

void switch_3(char arr1[],char arr2[]) {
    char* temp1=arr1;
    temp1=arr1;
    strcat(temp1,arr2); 
    cout <<temp1;
    return;
}

void switch_4(char arr1[],char arr2[]) {
    int result=strcmp(arr1,arr2);
    cout << result;
    return;
}

void switch_5(char arr1[],char arr2[]) {
    int len1=strlen(arr1),len2=strlen(arr2);
    cout <<endl<<"The length of first string is : "<<len1;
    cout <<endl<<"The length of the second string is : "<<len2;
    return;
}

void switch_6(char arr1[],char arr2[]) {
    char upper1[80]={'\0'};
    char upper2[80]={'\0'};

    for (int i=0;arr1[i]!='\0';i++)
    upper1[i]=putchar(toupper(arr1[i]));
    cout << "\nFirst string in all uppercase is : "<<upper1;

    for (int j=0;arr2[j]!='\0';j++)
    upper2[j]=putchar(toupper(arr2[j]));
    cout << "\nSecond string in all uppercase is : "<<upper2;
    
}

void switch_7(char arr1[],char arr2[]) {
    char lower1[80]={'\0'};
    char lower2[80]={'\0'};

    for (int i=0;arr1[i]!='\0';i++)
    lower1[i]=putchar(tolower(arr1[i]));
    cout << "\nFirst string in all uppercase is : "<<lower1;

    for (int j=0;arr2[j]!='\0';j++)
    lower2[j]=putchar(tolower(arr2[j]));
    cout << "\nSecond string in all uppercase is : "<<lower2;
}

void switch_8(char arr1[],char arr2[]) {
    int where=0,num_vowel1=0,num_vowel2=0;
    char vowels[6]={'a','e','i','o','u','\0'};
    
    for (int i=0;arr1[i]!='\0';i++)
    {
        for(int j=0;vowels[j]!='\0';j++)
        if (arr1[i]==vowels[j]) num_vowel1++;
    }
    cout << endl<<"Total vowels in first string are : "<<num_vowel1;

    for (int i=0;arr2[i]!='\0';i++)
    {
        for(int j=0;vowels[j]!='\0';j++)
        if (arr2[i]==vowels[j]) num_vowel2++;
    }
    cout << endl<<"Total vowels in second string are : "<<num_vowel2;

    return;
}

void switch_9 (char arr1[],char arr2[]) {
    string s1=arr1,s2=arr2;
    int len1=s1.length(),len2=s2.length();
    char rarr1[len1+1]={'\0'},rarr2[len2+1]={'\0'}; 
    int j=len1-1;
    for (int i=0;i<len1;i++)
    {
        rarr1[i]=arr1[j];
        j--;
    }
    cout << "The reverse of first string is "<<rarr1;

    int k=len2-1;
    for (int i=0;i<len2;i++)
    {
        rarr2[i]=arr2[k];
        k--;
    }
    cout << "\nThe reverse of second string is "<<rarr2;
    return;
}
