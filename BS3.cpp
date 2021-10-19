//count of element
//Number of times sorted array is rotated
#include <bits/stdc++.h>
using namespace std;
int rotatedSortedArray(int a[],int low,int high,int n){
	int mid,prev=0,next=0;
	while(low<=high){
		mid = (low + high)/2;
		//cout<<"\nmid: "<<mid;
		next = (mid+1)%n;
		prev = (mid+n-1)%n;
		
		if(a[mid]<=a[next] && a[mid]<=a[prev]){
			return mid;	
		} 
		
		
		if(a[mid]<=a[high]){
			high = mid-1;
		}else if(a[low]<=a[mid]){
			low = mid+1;
		}	
	}
	

	
}

int main(){
	int a[] = {11,12,15,18,2,5,6,8};
	int low =0,n=8;
	int high=n-1;

	int res = rotatedSortedArray(a,low,high,n);
	cout<<res;
	
	return 0;
}
