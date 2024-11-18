#include <bits/stdc++.h>

using namespace std;

int N = 10;

void merge(int arr[], int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;
	
	int L[n1];
	int R[n2];
	
	for (int i = 0; i < n1; i++)
	{
		L[i] = arr[p + i];
	}
	for (int j = 0; j < n2; j++)
	{
		R[j] = arr[q + 1 + j];
	}
	
	int i = 0, j = 0, k = p;
	
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k++] = L[i++];
		}
		else
		{
			arr[k++] = R[j++];
		}
	}
	
	while (i < n1)
	{
		arr[k++] = L[i++];
	}
	
	while (j < n2)
	{
		arr[k++] = R[j++];
	}
}

void mergeSort(int arr[], int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		mergeSort(arr, p, q);
		mergeSort(arr, q + 1, r);
		merge(arr, p, q, r);
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
	
	mergeSort(arr, 0, N - 1);
	
	cout << "Sorted array: ";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}//main
