//Find an Element in a rotated sorted array
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int low ,int high,int ele){
	int mid;
	while(low<=high){
		mid = low + (high-low)/2;
		if(ele==a[mid])
			return mid;
		else if(ele<a[mid])
			high = mid-1;
		else
			low = mid+1;
	}
	return -1;
}
int findMinimumElement(int a[],int low,int high,int n){
		int mid;
		
		if(high<low)
			return -1;
		while(low<=high){
			mid = low + (high-low)/2 ;
			int next = (mid+1)%n;
			int prev = (mid+n-1)%n;
			if(a[mid]<=a[prev] && a[mid]<=a[next])
				return mid;
			if(a[mid]<=a[high])
				high = mid -1;
			else if(a[low]<=a[mid])
				low = mid+ 1;
		}
	}
int main(){
	int a[] = {11,12,15,18,2,5,6,8};
	int n = sizeof(a)/sizeof(a[0]);
	//cout<<"n: "<<n;
	int low=0,high=n-1;
	int prev,next,ele=2;
	int minIndex = findMinimumElement(a,low,high,n);
	cout<<minIndex;
	int leftSearch = binarySearch(a,low,minIndex-1,ele);
	int rightSearch = binarySearch(a,minIndex,n-1,ele);
	cout<<"\nrightSearch: "<<rightSearch;
	cout<<"\nleftSearch "<<leftSearch;
	if(leftSearch>0)
		cout<<leftSearch;
	else
		cout<<rightSearch;
		
	return 0;
}
