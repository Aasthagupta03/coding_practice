#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	for(int i=0;i<n;i++)
		a[a[i]%n] = a[a[i]%n] +n;
		
	for(int i=0;i<n;i++)
		if((a[i]/n)>1)
			cout<<i<" ";
			
	return 0;
}
