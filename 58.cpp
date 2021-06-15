#include <bits/stdc++.h>
using namespace std;
int countEquals(string s, int n){
	int even=0,odd=0,count=0;
	for(int i=0;i<n;i++){
		
		if(s[i]=='0'){
			even++;	
			//cout<<"even: "<<even<<endl;
		}else if(s[i]=='1'){
			odd++;
			//cout<<"odd: "<<odd<<endl;
		}
		if(even==odd){
			even=0;odd=0;
			count++;
		}
	}
	if(count==0)
		return -1;
	return count;
}
int main(){
	
	string s;
	cin>>s;

	
	int res = countEquals(s,s.length());
	cout<<res;
	return 0;
}

