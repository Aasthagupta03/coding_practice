//Minimize the maximum difference between the heights
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	int k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int minn,maxn;
	int res = a[n-1]-a[0];	
	for(int i=1;i<=n-1;i++){
		if(a[i]>=k){
			
			maxn = max(a[i-1]+k,a[n-1]-k);
			minn = min(a[0]+k,a[i]-k);
			res = min(res,maxn-minn);
		}else
			continue;
	}
	
	cout<<res;
	
	
	
	return 0;
}
