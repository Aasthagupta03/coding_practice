#include <bits/stdc++.h>
using namespace std;
int matchBin(int a[],int n){
	int low=0,high=n-1;
	while(low<=high){
		int mid = (low + high)/2;
		if(a[mid]==mid)
		{
			return mid; 
		}else if(a[mid]>mid){
			high = mid -1;
			
		}else{
			low = mid + 1;	
		}
		
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int res = matchBin(a,n);
	cout<<res;
	return 0;
}
