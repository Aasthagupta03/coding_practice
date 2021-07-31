#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int* left = new int[sizeof(int)*n]; 
	int* right = new int[sizeof(int)*n];
	int* prod = new int[sizeof(int)*n];
	int i,j;
	left[0] = 1;
	right[n-1] = 1;
	
	for(i=1;i<n;i++){
		left[i] = a[i-1]*left[i-1];
	}
	for(j=n-2;j>=0;j--){
		right[j] = a[j+1] * right[j+1];
	}
	
	for (i = 0; i < n; i++)
       prod[i] = left[i] * right[i];
  
    
    for (i = 0; i < n; i++)
    	cout << prod[i] << " ";
}
