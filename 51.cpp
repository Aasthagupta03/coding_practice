#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1 ,s2;
	cin>>s1>>s2;
	int a = s1.length();
	int b = s2.length();
	string temp = s1+ s1;
	if(temp.find(s2)!= string::npos)
		cout<<"Roatating string";
	
	return 0;
}
