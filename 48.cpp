#include <bits/stdc++.h>
using namespace std;
int main(){
	string s ;
	cin>>s;
	
	int len = s.length();
	string rev;
	
	
	for(int i=len-1;i>=0;i--){
		rev.push_back(s[i]);	
	}
	if(rev==s)
		cout<<"padindrome";
	else
		cout<<"not a palindrome";
	return 0;
}
