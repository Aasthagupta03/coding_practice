//Index of first 1 in a binary sorted infinite array
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int low ,int high,int ele){
	int mid, res=-1;
	while(low<=high){
		mid = low+(high-low)/2;
		if(ele==a[mid]){
		
			res = mid;
			high = mid-1;
		}if(ele<a[mid])
			high = mid-1 ;
		else 
			low = mid+1;
	}
	return res;
}
int main(){
	
	int a[] = {0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int low=0,high=1;
	int ele= 1;
	//finding high index 
	while(ele>a[high]){
		low = high;
		high = 2 * high;
	}
	int res = binarySearch(a,low,high,ele);
	
	cout<<res;
	return 0;
}
