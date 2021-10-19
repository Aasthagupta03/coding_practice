//Find Maximum element in bitonic array
#include <bits/stdc++.h>
using namespace std;
BS(int a[],int low,int high,int size){
	int mid;
	while(low<=high){
		mid = (low + high)/2;
		
		if(mid>0 && mid<size-1){
		
			if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
				return mid;
			else if(a[mid-1]>a[mid])
				high = mid-1;
			else
				low = mid+1;
		}else if(mid==0){     //for edge case
			if(a[0]>a[1])
				return 0;
			else 
				return 1;
			
		}else if(mid==size-1){
			if(a[size-1]>a[size-2])
				return a[size-1];
			else
				return a[size-2];
		}
	}
	
	
}
int main(){
	int a[] = {5,10,2,15,31,90,21};
	int size = sizeof(a)/sizeof(a[0]);
	int low=0,high=size-1;

	int res = BS(a,low,high,size);
	cout<<res;
	return 0;
}
