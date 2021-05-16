#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;

	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<"Minimum element: ";
	cout<<arr[k-1];
	cout<<"Maximum element: ";
	cout<<arr[n-k];
	

return 0;
}
