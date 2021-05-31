#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int a[n];
	int ans =0;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0,j=n-1;i<=j;){
		if(a[i]==a[j]){
		
			i++;
			j--;
		}else if(a[i]>a[j]){
			j--;
			a[j] = a[j] + a[j+1];
			ans++;
		}else{
			i++;
			a[i] = a[i] + a[i-1];
			ans++;
			
		}
	}
	cout<<ans;
	

	return 0;
}

