#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++) cin>>arr1[i];
	for(int i=0;i<m;i++) cin>>arr2[i];
	
	int i=0,j=0,k=n-1;
	while(i<=k && j<m){
		if(arr1[i]<arr2[j])
			i++;
		else
			swap(arr2[j++],arr1[k--]);
	}
	sort(arr1,arr1+n);
	sort(arr2,arr2+m);
	for(int i=0;i<n;i++) cout<<arr1[i]<<" ";
	for(int i=0;i<m;i++) cout<<arr2[i]<< " ";
	
	
	return 0;
} 
