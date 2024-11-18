#include<bits/stdc++.h>

using namespace std;

void insertionSort(double arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		double key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void bucketSort(double arr[], int n)
{
	// create n empty buckets
	
}

int main()
{
	double arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Original array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	bucketSort(arr, n);
	
	cout << "Sorted array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}//main
