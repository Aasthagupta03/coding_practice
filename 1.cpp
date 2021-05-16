#include <bits/stdc++.h>
using namespace std;


void revswap(int arr[], int i, int j)
{
	while (i < j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}	

void rev(int arr[], int s)
{
for (int i = 0; i < s; i++)
cout << arr[i] << " ";

cout << endl;
}

int main()
{	int n = 6;
	int arr[] = {12,34,56,3,1, 6};
	


	
	rev(arr, n);
	

	revswap(arr, 0, n-1);
	
	

	rev(arr, n);
	
	return 0;
}

