#include<bits/stdc++.h>

using namespace std;

// function to get the digit at a specific position
int getDigit(int numb, int pos)
{
	return (numb / pos) % 10;
}

// function to perform counting sort based on a specific digit pos
void countingSort(int arr[], int n, int pos)
{
	const int radix = 10;
	int count[radix] = {0};
	int output[n];
	
	// count occurrences of digits at the specified positions
	for (int i = 0; i < n; i++)
	{
		int digit = getDigit(arr[i], pos);
		count[digit]++;
	}
	
	// modify count array to store cumulative count
	for (int i = 1; i < radix; i++)
	{
		count[i] += count[i - 1];
	}
	
	// build the output array
	for (int i = n - 1; i >= 0; i--)
	{
		int digit = getDigit(arr[i], pos);
		output[count[digit] - 1] = arr[i];
		count[digit]--;
	}
	
	// copy the output array back to the original array
	for (int i = 0; i < n; i++)
	{
		arr[i] = output[i];
	}
}

// function to perform radix sort
void radixSort(int arr[], int n)
{
	int max_numb = *max_element(arr, arr + n);
	
	// perform counting sort for each digit position
	for (int pos = 1; max_numb / pos > 0; pos *= 10)
	{
		countingSort(arr, n, pos);
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
	
	radixSort(arr, n);
	
	cout << "Sorted array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}//main
