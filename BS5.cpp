//nearly sorted array ith elements could be in -->  i-1   i    i+1
#include <bits/stdc++.h>
using namespace std;
int findNearlySortedArray(int a[],int low,int high,int ele){
		int mid;
		while(low<=high){
			mid = low +(high-low)/2;
			if(ele == a[mid])
				return mid;
			if(ele==a[mid-1] && mid-1>=low)
				return mid-1;
			if(ele==a[mid+1] && mid+1<=high)
				return mid+1;
			else if(ele<=a[mid])
				high = mid-2;
			else
				low = mid+2;
		}
		return -1;
}
int main(){
	int a[] = {4,5,10,30,20,40,50};
	int n = sizeof(a)/sizeof(a[0]);
	int low=0,high=n-1,ele=40;
	int index = findNearlySortedArray(a,low,high,ele);
	cout<<index;
	
	return 0;
}
