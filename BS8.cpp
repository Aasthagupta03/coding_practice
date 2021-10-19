//Find next alphabetical order
#include <bits/stdc++.h>
using namespace std;
char findFloor(int a[],int low,int high,int ele){
	int mid;
	char res='$';
	while(low<=high){
		mid = (low + high)/2;
		if(a[mid]==ele)
			return a[mid];
		if(a[mid]<ele){
			low = mid+1;
		}else {
			res = a[mid];
			high = mid-1;
		}
	}
	return res;
}
int main(){
	int c[] = {'a','b','d','f','g','j','l','r','y'};
	
	int n = sizeof(c)/sizeof(c[0]);
	char ele = 'z';
	char res = findFloor(c,0,n-1,ele);
	cout<<"result:"<<res;
	return 0;
}
