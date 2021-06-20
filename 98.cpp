#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		m[a[i]]++;
	}
	int count=0;
	for(auto i : m){
		if(i.second>n/2){
			count=1;
			cout<<"Majority element found at: "<<i.first<<endl;
		}
		if (cout==0)
			cout<<"No Majority element";
	}
	return 0;
}
