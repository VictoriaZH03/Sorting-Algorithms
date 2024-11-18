#include<bits/stdc++.h>

using namespace std;

// function to maintain max-heap property
void maxHeapify(int arr[], int n, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	
	if (left < n && arr[left] > arr[largest])
	{
		largest = left;
	}
	if (right < n && arr[right] > arr[largest])
	{
		largest = right;
	}
	if (largest != i)
	{
		int tmp = arr[i];
		arr[i] = arr[largest];
		arr[largest] = tmp;
		
		maxHeapify(arr, n, largest);
	}
}

// function to build max-heap
void buildMaxHeap(int arr[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
	{
		maxHeapify(arr, n, i);
	}
}

// heapsort function
void heapSort(int arr[], int n)
{
	buildMaxHeap(arr, n);
	for (int i = n - 1; i > 0; i--)
	{
		int tmp = arr[0];
		arr[0] = arr[i];
		arr[i] = tmp;
		
		maxHeapify(arr, i, 0);
	}
}

int main()
{
	int arr[] = {16, 1, 14, 2, 8, 4, 2, 8, 4, 9, 7, 5, 1, 10, 10, 3, 9, 6, 3, 7};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Original array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	heapSort(arr, n);
	
	cout << "Sorted array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	
	return 0;
}//main
