//Find an element in the infinite array
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int low ,int high,int ele){
	int mid;
	while(low<=high){
		mid = low+(high-low)/2;
		if(ele==a[mid])
			return mid;
		if(ele<a[mid])
			high = mid-1 ;
		else 
			low = mid+1;
	}
	return -1;
}
int main(){
	
	int a[] = {3,5,6,7,9,10,12,14,18,21};
	int low=0,high=1;
	int ele= 12;
	while(ele>a[high]){
		low = high;
		high = 2 * high;
	}
	int res = binarySearch(a,low,high,ele);
	
	cout<<res;
	return 0;
}
