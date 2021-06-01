#include <bits/stdc++.h>
using namespace std;
int main(){
	int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    
	int x,rc=4;
	cin>>x;
	int maxx = mat[0][0], minn = mat[rc-1][rc-1];
	if(rc==0)
		return -1;


	cout<<"hi";	
	int i=0,j=rc-1;
	while(i<rc && j>=0){
		if(mat[i][j] == x){
		
			cout<<"mat[i][j] = "<<i+1<<" "<<j+1;
			break;
		}
		if(mat[i][j]>x)
			j--;
		else 
			i++;
		
	}

	return 0;
}
