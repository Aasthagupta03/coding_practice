#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	unordered_set<int> set;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		set.insert(a[i]);
	}
	int res=0;
	for(int i=0;i<n;i++){
		if((set.find(a[i]-1)==set.end())){
			int j = a[i] + 1;
			while(set.find(j)!=set.end())
				j++;
			res = max(res,j-a[i]);
		}
	}
	cout<<res;
	
	return 0;
}
