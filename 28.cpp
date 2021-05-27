#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,sum;
	cin>>n>>sum;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	sort(a,a+n);
	int l,r;
	for(int i=0;i<n-2;i++){
		l = i+1;
		r = n-1;
		while(l<r){
			
			if(a[i] + a[l] + a[r] == sum){
				cout<<a[i]<<" "<<a[l]<<" "<<a[r];
				break;
			}else if(a[i] + a[l] + a[r] < sum)
				l++;
			else 
				r--;
		}
	}
	
	
	
	
	return 0;
}

/*
Test case 1:
n = 6
sum = 22
a[] =  1, 4, 45, 6, 10, 8 ;


*/
