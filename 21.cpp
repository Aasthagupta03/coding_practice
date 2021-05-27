#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	unordered_set<int> m;
	bool flag = false;
	for(int i=0;i<n;i++) cin>>a[i];
	int sum =0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		
		if(sum==0 || m.find(sum) != m.end())
			flag = true;
			
		m.insert(sum);
	}
	if(flag==false)
		cout<<"Not exist";
	else 
		cout<<"exist";
	
	
	
	return 0;
}
