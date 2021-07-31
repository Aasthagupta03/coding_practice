#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int ans = 0;
	sort(a,a+1);
	for(int i=0;i<n-2;i++){
		int j=i+1,k=n-1;
		while(j<k){
			if(a[i]+a[j]+a[k]>=x){
				k--;
			}else{
				ans = ans+(k-j);
				j++;
			}
		
		}
		
	}
	cout<<ans;
	
	
	
	
	
	return 0;
}
