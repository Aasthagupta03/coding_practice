#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n,low,high;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>low>>high;
	int start =0,end=n-1;
	for(int i=0;i<=end;){
		if(a[i]<low)
			swap(a[i++],a[start++]);
		else if(a[i]>high)
			swap(a[i],a[end--]);
		else
			i++;
				
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	
	
	
	return 0;	
}
