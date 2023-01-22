#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    
    int count=0;
    for(int i=0;i<n-2;i++){
        if(s[i]=='x' && s[i+1]=='x' &&s[i+2]=='x')
            count++;
    }
    
    cout<<count;
}

int main(){
        solve();
}
