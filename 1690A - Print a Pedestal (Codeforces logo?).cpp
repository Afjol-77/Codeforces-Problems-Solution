#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int div=n/3;
    int a,b,c;
    if(n%3==0){
        a=div+1;
        b=div;
        c=div-1;
    }
    else if(n%3==2){
        a=div+2;
        b=div+1;
        c=div-1;
    }
    else if(n%3==1){
        a=div+2;
        b=div;
        c=div-1;
    }
    cout<<b<<" "<<a<<" "<<c<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
