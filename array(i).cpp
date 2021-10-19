#include <iostream>
#define N 10
using namespace std;
int main()
{
	int i;
	int arr[N] = {0};
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = N - 1; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
