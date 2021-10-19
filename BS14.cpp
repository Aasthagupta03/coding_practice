//Search in row wise and column wise sorted array
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[4][4] = {{2,4,8,9},{3,5,9,11},{4,8,10,13},{5,9,12,15}};
	int ele =10 ,n=4,m=4,i=0,j=m-1;

	while(i<m && j>=0){
		//cout<<"i"<<i<<"\n";
		if(a[i][j]==ele){
		
			cout<<a[i][j]<<" "<<i<<" "<<j;
			return 0;
		}else if(a[i][j]>ele)
			j--;
		else if(a[i][j]<ele)
			i++;
	} 
	return 0;
	
}
