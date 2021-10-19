//Minimum difference element in a sorted array
#include <bits/stdc++.h>
using namespace std;
BS(int a[],int low,int high,int ele){
	int mid;
	while(low<=high){
		mid = (low + high)/2;
		if(ele==a[mid])
			return a[mid]-ele;
		else if(ele<a[mid])
			high = mid-1;
		else
			low = mid+1;
	}
	int lowRes = abs(a[low]-ele);
	int highRes = abs(a[high]-ele);
	if(lowRes<=highRes)
		return lowRes;
	else 
		return highRes;
	
}
int main(){
	int a[] = {2,5,7,8,12,13,21};
	int size = sizeof(a)/sizeof(a[0]);
	int low=0,high=size-1;
	int ele=18;
	int res = BS(a,low,high,ele);
	cout<<res;
	return 0;
}
