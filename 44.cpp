#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

void reverseCols(int arr[R][C])
{
	for (int i = 0; i < C; i++)
		for (int j = 0, k = C - 1;
			j < k; j++, k--)
			swap(
				arr[j][i], arr[k][i]);
}

void transpose(int arr[R][C])
{
	for (int i = 0; i < R; i++)
		for (int j = i; j < C; j++)
			swap(arr[i][j], arr[j][i]);
}


void printMatrix(int arr[R][C])
{
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++)
			cout << arr[i][j] << " ";
		cout << '\n';
	}
}




int main()
{
	int arr[R][C] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 } };
	printMatrix(arr);
	cout<<"\n_________\n";
	transpose(arr);
	reverseCols(arr);
	printMatrix(arr);
	return 0;
}

