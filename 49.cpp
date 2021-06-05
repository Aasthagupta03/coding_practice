#include <bits/stdc++.h>
using namespace std;
int main(){
	string s ;
	cin>>s;
	map<char,int> freq;
	int len = s.length();
	string rev;
	
	for(int i=0;i<len;i++){
		freq[s[i]]++;
	}
	for(auto i: freq){
		if(i.second>1)
			cout<<i.first<<" "<<i.second<<endl;
	}
	return 0;
}
