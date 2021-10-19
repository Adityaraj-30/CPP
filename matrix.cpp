/*
	Name: matrix(qno15)
	Author: Aditya Raj
	Date: 04-02-21 20:26
	Description: 
*/

#include <iostream>
#define SIZE 100


using namespace std;


void upperright(int arr[SIZE][SIZE], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j >= i)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }
}


void lowerright(int arr[SIZE][SIZE], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j <= i)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }
}


void upperleft(int arr[SIZE][SIZE], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j < row - i)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }
}


void lowerleft(int arr[SIZE][SIZE], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j < row - i - 1)
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = 1;
            }
        }
    }
}


int main()
{
    int arr[SIZE][SIZE];
    int r, c, choice;
    char ch;


    do
    {
        cout << "\nEnter the size of row : ";
        cin >> r;
        cout << "\nEnter the size of column : ";
        cin >> c;


        if (r == c)
        {
            cout << "\n\t 1--> UPPER RIGHT ";
            cout << "\n\t 2--> LOWER RIGHT ";
            cout << "\n\t 3--> UPPER LEFT ";
            cout << "\n\t 4--> LOWER LEFT ";
            cout << "\n\t ENTER YOUR CHOICE : ";
            cin >> choice;


            if (choice == 1)
            {
                upperright(arr, r, c);
            }
            else if (choice == 2)
            {
                lowerright(arr, r, c);
            }
            else if (choice == 3)
            {
                upperleft(arr, r, c);
            }
            else if (choice == 4)
            {
                lowerleft(arr, r, c);
            }
            else
            {
                cout << "\n\t WRONG CHOICE ";
                break;
            }


            cout<<"\n\t";
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << "\n\t";
            }
        }


        else
        {
            cout << "\n\t PLEASE ENTER A DIMENSIONS OF A SQUARE MATRIX ..";
        }


        cout << "\n\n DO YOU WANT TO CONTINUE (YES/NO) .";
        cin >> ch;


    } while (ch == 'yes' || ch == 'YES');


    return 0;
}
