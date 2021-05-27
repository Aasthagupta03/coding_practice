#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int min_e =1,max_e=1,res=1;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			max_e = max_e* a[i];
			min_e = min(a[i]*min_e,1);
		}else if(a[i]==0){
			min_e = max_e = 1;
		}else{
			swap(max_e,min_e);
			max_e = max(a[i]*max_e,1);
			min_e = min_e * a[i];
		}
		res = max(max_e,res);
	}
	cout<<res;
	return 0;
	
}
