// C++ program to Count Inversions
// in an array
#include <bits/stdc++.h>
using namespace std;

int Count(int arr[], int n)
{
	int c = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j])
				c++;

	return c;
}

int main()
{	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	
	cout << Count(arr, n);
	return 0;
}

// This code is contributed
// by Aastha Gupta

