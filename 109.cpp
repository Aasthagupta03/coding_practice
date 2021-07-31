#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int p;
int q;cin>>q;
while(q--){

int sum=0;

cin>>p;

int x=upper_bound(a,a+n,p)-a;
cout<<"x: "<<x<<endl; 

for(int i=0;i<x;i++){
    sum+=a[i];
}

cout<<x<<" "<<sum<<endl;

}

return 0;

}
