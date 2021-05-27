#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	unordered_map<int,int> freq;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int x = n/k;
	for(int i=0;i<n;i++)
		freq[a[i]]++;
		
	for(auto i: freq){
		if(i.second > x)
			cout<<i.first<<" ";
	}
	
	
	
	return 0;	
}


/*

int a[] = { 1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1 };
  
    int k = 4;
    
*/    
