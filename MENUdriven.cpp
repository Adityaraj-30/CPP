
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int even_arr(int arr[], int n){

int even[10];

    int i=0;

    for(int i = 0; i<10 ; i++){

        if(arr[i]%2 == 0){

            even[i] = arr[i];

            i++;

        }

    }

    return even[i];

}



int odd_arr(int arr[], int n){

    int odd[10];
    int j=0;

    for(int i = 0; i<10 ; i++){

        if(arr[i]%2!= 0){

            odd[j] = arr[i];

            j++;

        }

    }

    return odd[10];

}

int sum_avg(const int arr[],int n){

    int sum=0;
    int avg=0;

    for (int i = 0; i < n; i++){

        sum += arr[i];

    }

    avg = sum/n;
}

int max_min(int arr[],int n){

    for (int i = 0; i < n; i++)

        cout << arr[i] << " ";



    // Find the minimum element

    cout << "\nMin Element = "

         << *min_element(arr, arr + n);



    // Find the maximum element

    cout << "\nMax Element = "

         << *max_element(arr, arr + n);

}



int dup(int arr[],int n){

    for(int i=0;i<n;++i)
    for(int j=i+1;j<n;)
{

    if(arr[i]==arr[j])

{
   for(int k=j;k<n-1;++k)
       arr[k]=arr[k+1];
       --n;
}

    else
        ++j;
}

    cout<<"\n";
    for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";

}



int reverse(int arr[], int n){

int out[10]={0};

for(int i = 0; i < n; i++){

        out[i] = arr[n-i-1];

    }    

    cout << "Reversed Array\n";

    for(int i = 0; i < n; i++){

        cout << out[i] << " ";

    }

}



int main(){

   int choice;
   int array[10]={0};

   cout<<"Enter array: ";

   for(int i=0; i<10; i++){
       cin>>array[i];
}

cout<<"---------------MENU----------------\n";

cout<<"s
int n = sizeof(array) / sizeof(array[0]);

    cout<<"Enter your choice:  ";
    cin>>choice;

    switch(choice){

    case 1: even_arr(array,n);

    break;



            case 2: odd_arr(array,n);

                    break;



            case 3: sum_avg(array,n);

                    break;



            case 4: max_min(array,n);

                    break;



            case 5: dup(array,n);

                    break;



            case 6: reverse(array,n);

                    break;



            default: cout<<"INVALID CHOICE";

                    break;

    }

    return 0;

}


