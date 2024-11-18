#include<bits/stdc++.h>

using namespace std;

// find the maximum element in the array
int findMax(int arr[], int n)
{
	int max_numb = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_numb)
		{
			max_numb = arr[i];
		}
	}
	return max_numb;
}

void countingSort(int A[], int B[], int n, int k)
{
	// create and initialize the count array
	int C[k + 1] = {0};
	// count the occurences of each element in A
	for (int j = 0; j < n; j++)
	{
		C[A[j]]++;
	}
	
	// modify C to store the cumulative count of elements
	for (int i = 1; i <= k; i++)
	{
		C[i] += C[i - 1];
	}
	
	// construct the sorted array B
	for (int j = n - 1; j >= 0; j--)
	{
		B[C[A[j]] - 1] = A[j];
		C[A[j]]--;
	}
}

int main()
{
	int arr[] = {10, 8, 3, 5, 2, 3, 0, 1, 1, 3, 7, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = findMax(arr, n);
	
	cout << "Original array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	int sorted[n];
	int m = sizeof(sorted) / sizeof(sorted[0]);
	
	countingSort(arr, sorted, n, k);
	
	cout << "Sorted array:" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << sorted[i] << " ";
	}
	cout << endl;
	
	return 0;
}//main
