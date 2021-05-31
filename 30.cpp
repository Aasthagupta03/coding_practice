#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	int min = 1000000;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<=(n-k);i++){
		if(a[k-1+i]-a[i] <min)
			min = a[k-1+i]-a[i];
	}
	cout<<min;
	
	return 0;
}


/*
Test case 1: 
n = 2, 5, 7, 1, 3 
k = 3
output: 2




*/
