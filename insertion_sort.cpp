#include <bits/stdc++.h>

using namespace std;

int N = 10;

void insertionSort(int arr[])
{
	for (int i = 1; i < N; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int arr[N] = {2,6,3,1,2,4,8,9,0,1};
	
	cout << "Original array: ";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	insertionSort(arr);
	
	cout << "Sorted array: ";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}//main
