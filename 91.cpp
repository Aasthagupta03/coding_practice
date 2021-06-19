#include <bits/stdc++.h>
using namespace std;
int lowBin(int a[],int n,int x){
	int low=0,high=n-1,res=-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(a[mid]>x){
			high = mid-1;
			
		}else if(a[mid]<x){
			low = mid +1;
		}else{
			res = mid;
			high = mid -1;
					
		}
	}
	return res;
}

int highBin(int a[],int n,int x){
	int low=0,high=n-1,res=-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(a[mid]>x){
			high = mid-1;
			
		}else if(a[mid]<x){
			low = mid +1;
		}else{
			res = mid;
			low = mid +1;
					
		}
	}
	return res;
}
int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int res1 = lowBin(a,n,x);
	int res2 = highBin(a,n,x);
	cout<<res1<<" "<<res2;
	
	return 0;
}
