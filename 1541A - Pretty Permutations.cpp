#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) a[i]=i+1;
    if(n%2!=0){
        swap(a[n-1],a[n-3]);
        for(int i=0;i<n-2;i+=2)
            swap(a[i],a[i+1]);
    }
    else if(n%2==0){
        for(int i=0;i<n-1;i+=2)
            swap(a[i],a[i+1]);
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
