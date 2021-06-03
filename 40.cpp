#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

int firstmed(bool arr[], int low, int high)
{
	if(high >= low)
	{
	
		int mid = low + (high - low)/2;
	
	
		if ( ( mid == 0 || arr[mid-1] == 0) && arr[mid] == 1)
			return mid;
	
		else if (arr[mid] == 0)
			return firstmed(arr, (mid + 1), high);
		
		
		else
			return firstmed(arr, low, (mid -1));
	}
	return -1;
}

int row(bool mat[R][C])
{

	int max_row_index = 0, max = -1;


	int i, index;
	for (i = 0; i < R; i++)
	{
		index = firstmed (mat[i], 0, C-1);
		if (index != -1 && C-index > max)
		{
			max = C - index;
			max_row_index = i;
		}
	}

	return max_row_index;
}

int main()
{
	bool mat[R][C] = { {0, 0, 0, 1},
					{0, 1, 1, 1},
					{1, 1, 1, 1},
					{0, 0, 0, 0}};

	cout << "Index of row with maximum 1s is " << row(mat);

	return 0;
}



