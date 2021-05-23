#include <bits/stdc++.h>
using namespace std;

int maxProfit(int arr[], int N)
{
	int n = N;
	int cost = 0;
	int maxC = 0;

	if (n == 0)
	{
		return 0;
	}

	int min_price = arr[0];

	for(int i = 0; i < n; i++)
	{
		
		min_price = min(min_price, arr[i]);
		cost = arr[i] - min_price;
		maxC = max(maxC, cost);
	}
	return maxC;
}

int main()
{

	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++) cin>>a[i];
	cout << maxProfit(a, n);

	return 0;
}

// This code is contributed by Aastha Gupta

