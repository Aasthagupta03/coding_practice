#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
		
	
	for(int i=0;i<n-1;i++){
			if(arr[i][1]>=arr[i+1][0]){
				cout<<"["<<arr[i][0]<<","<<arr[i+1][1]<<"] ";
			}else if(arr[i][1]<arr[i+1][0]){
				cout<<"["<<arr[i+1][0]<<","<<arr[i+1][1]<<"] "; 
			}
		
	}
		
	return 0;
}
