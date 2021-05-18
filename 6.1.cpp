#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];

	//int c[m+n];

	int i=0,j=0,k=0,t=0;
	while(i<m && j<n){
		if(a[i]<b[j]){
			//c[k++]=a[i++];
			cout<<a[i++]<<" ";
		}else if(a[i]>b[j]){
			//c[k++] = b[j++];
			cout<<b[j++]<<" ";
		
		}else if(a[i]==b[j]){
			//c[k++] = b[j++];
			cout<<b[j++]<<" ";
			//t++;
			i++;
		}
		
		
	}
	if(m>n){
	
		for(int j=n;j<m;j++){
			
			//c[k++] = a[j];
			cout<<a[j]<<" ";
		}
	}else{
		for(int j=m;j<n;j++){
			
			//c[k++] = b[j];
			cout<<b[j]<<" ";
		}
	}	

		
	
	
	
	
	
	return 0;
}
