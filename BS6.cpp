//Find Floor of an sorted array
#include <bits/stdc++.h>
using namespace std;
int findFloor(int a[],int low,int high,int ele){
	int mid,res=0;
	while(low<=high){
		mid = (low + high)/2;
		if(a[mid]==ele)
			return a[mid];
		if(a[mid]<ele){
			res = a[mid];
			low = mid+1;
		}else 
			high = mid-1;
	}
	return res;
}
int main(){
	int a[] = {2,4,6,7,8,10,15,17,19,22};
	
	int n = sizeof(a)/sizeof(a[0]);
	int ele = 5;
	int res = findFloor(a,0,n-1,ele);
	cout<<"result:"<<res;
	return 0;
}
