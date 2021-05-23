// C++ implementation of simple method to find count of
// pairs with given sum.
#include <bits/stdc++.h>
using namespace std;

int pairsCount(int arr[], int n, int sum)
{
	unordered_map<int, int> m;

	for (int i = 0; i < n; i++)
		m[arr[i]]++;

	int tcount = 0;

	for (int i = 0; i < n; i++) {
		tcount += m[sum - arr[i]];

		if (sum - arr[i] == arr[i])
			tcount--;
	}

	return tcount / 2;
}

int main()
{	
	int n,sum=0;
	int arr[n];
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	cin>>sum;
	cout<< pairsCount(arr, n, sum);
	return 0;
}

