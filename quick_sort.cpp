#include<bits/stdc++.h>

using namespace std;

int partition(int arr[], int p, int r)
{
	// pivot element
	int x = arr[r];
	int i = p - 1;
	
	for (int j = p; j <= r - 1; j++)
	{
		if (arr[j] <= x)
		{
			i++;
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	int tmp = arr[i + 1];
	arr[i + 1] = arr[r];
	arr[r] = tmp;
	
	return i + 1;
}

void quickSort(int arr[], int p, int r)
{
	if (p < r)
	{
		int q = partition(arr, p, r);
		quickSort(arr, p, q - 1);
		quickSort(arr, q + 1, r);
	}
}

int main()
{
	int arr[] = {10, 8, 3, 5, 2, 3, 0, 1, 1, 3, 7, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Original array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	quickSort(arr, 0, n - 1);
	
	cout << "Sorted array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}//main
