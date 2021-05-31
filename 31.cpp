#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int start = 0,end =0,sum=0,min=n+1;
	while(end<n){
		while(sum<=k && end <n){
			sum = sum + a[end++];
			
			while(sum>k && start<n){
			
			if(end-start<min)	
				min = end- start;
			
			sum = sum - a[start++];
			}
		}	
	}
	cout<<min;
	
	
	
	return 0;
}

