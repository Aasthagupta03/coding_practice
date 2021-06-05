#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2,res ;
	cin>>s1>>s2>>res;
	
	int a = s1.length();
	int b = s2.length();	
	int resStr = res.length();
	if((a+b) != resStr)
		cout<<"No";
	else{
		int f=0;
		int i=0,j=0,k=0;
		while(k<resStr){
			if(i<a && s1[i] == res[k])
				i++;
			else if(j<b && s2[j] == res[k] )
				j++;
			else{
				f=1;
				break;
			}
			k++;
		}
		if(i<a || b<j ) cout<<"no";
		else 
			cout<<"yes";
	}
		

	
	return 0;
}
