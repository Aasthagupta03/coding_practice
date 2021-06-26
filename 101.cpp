#include <bits/stdc++.h>
using namespace std;
void fourElements(int a[],int n,int x){
	unordered_map<int,pair<int,int>> p;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			p[a[i]+a[j]] = {i,j};
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int s = a[i] + a[j];
			if(p.find(x-s)!=p.end()){
				pair<int,int> pp= p[x-s];
				if(pp.first!=i && pp.first!=j && pp.second!=i && pp.second!=j){
				
					cout<<a[i]<<" "<<a[j]<<" "<<a[pp.first]<<" "<<a[pp.second];
					return;
				}
			}
			
		}
	}
	
	
	
}
int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	fourElements(a,n,x);
	return 0;
}
