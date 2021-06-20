#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	unordered_map<int,bool> m;
	cout<<"repetting element: "<<endl;
	for(int i : a){
		if(m.find(i) == m.end()){
			m[i] = true;
		}else{
			cout<<i<<" ";
		}
	}
	cout<<"\nMissing element: "<<endl;
	for(int i=1;i<=n;i++){
		if(m.find(i) == m.end()){
			cout<<i<<" ";
		}
	}	
	return 0;
}
