//count of element
#include <bits/stdc++.h>
using namespace std;
int findFirstOccurence(int a[],int low,int high,int ele){
	int mid;
	while(low<=high){
		
		mid = (low + high)/2;
		
		if(ele==a[mid]){
			high = mid -1;
		}else if(ele<a[mid])
			high = mid-1;
		else
			low = mid+1;
		
			
	}
	return mid;
	
}
int findLastOccurence(int a[],int low,int high,int ele){
	int mid;
	while(low<=high){
		
		mid = (low + high)/2;
		
		if(ele==a[mid]){
			low = mid +1;
		}else if(ele<a[mid])
			high = mid-1;
		else
			low = mid+1;
		
			
	}
	return mid;
	
}
int main(){
	int a[] = {2,4,5,10,10,10,10,12,16,20};
	int low =0,n=10,ele=10;
	int high=n-1;
	int firstOccurence = findFirstOccurence(a,low,high,ele);
	int LastOccurence = findLastOccurence(a,low,high,ele);
	
	cout<<"firstOccurence "<<firstOccurence;
	cout<<"\nLastOccurence "<<LastOccurence;
	cout<<"\nNo of count: "<<LastOccurence-firstOccurence+1;
	
	
	return 0;
}
