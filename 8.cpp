// C++ program to print largest contiguous array sum
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	int res,res_upt;
	res = res_upt = 0;
	
	for(int i=0;i<n;i++){
		res_upt += a[i];
		if(res_upt>res)
			res = res_upt;
		if(res_upt<0)
			res_upt = 0;
		
			
	}
	
	cout<<res;
	return 0;
}
