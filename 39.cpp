#include<bits/stdc++.h>
using namespace std;

const int MAX = 100;

int binaryMedian(int m[][MAX], int r ,int c)
{
	int min = INT_MAX, max = INT_MIN;
	for (int i=0; i<r; i++)
	{
		// Finding the minimum element
		if (m[i][0] < min)
			min = m[i][0];
		cout<<"min: "<<min<<endl;
		// Finding the maximum element
		if (m[i][c-1] > max)
			max = m[i][c-1];
			cout<<"max: "<<max<<endl;
	}

	int res = (r * c + 1) / 2;
	while (min < max)
	{
		int mid = min + (max - min) / 2;
		cout<<"mid: "<<mid<<endl;
		int place = 0;

	
		for (int i = 0; i < r; ++i){
		
			place += upper_bound(m[i], m[i]+c, mid) - m[i];
			//cout<<"place : "<<place<<endl;
		
		}
		if (place < res)
			min = mid + 1;
		else
			max = mid;
	}
	return min;
}


int main()
{
	int r = 3, c = 3;
	int m[][MAX]= { {1,3,5}, {2,6,9}, {3,6,9} };
	cout << "Median is " << binaryMedian(m, r, c) << endl;
	return 0;
}

