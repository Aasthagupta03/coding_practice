#include <bits/stdc++.h>
using namespace std;
int main(){
	string s ;
	cin>>s;
	
	int len = s.length();
	string rev;
	
	/*
	for(int i=len-1;i>=0;i--){
		rev.push_back(s[i]);	
	}
	cout<<rev;
	*/
	
	/*
	for(int i=0;i<=len/2;i++){
		swap(s[i],s[len-i-1]);
	}
	cout<<s;
	*/
	
	reverse(s.begin(),s.end());
	cout<<s;
	
	
	return 0;
}
