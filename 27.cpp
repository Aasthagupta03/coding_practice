#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	
	unordered_set<int> set;
	
	for(int i=0;i<m;i++)
		set.insert(a[i]);
	
	for(int i=0;i<n;i++)
		set.insert(b[i]);
	
	int p = set.size();
	
	if(m==p){
		cout<<"subarray is present";
	}else
		cout<<"subarray is not present";
	
	
	return 0;
}
