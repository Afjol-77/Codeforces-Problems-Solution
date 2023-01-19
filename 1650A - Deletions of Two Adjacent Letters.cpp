#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    char t;
    cin>>s;
    cin>>t;
    
    int size=s.size();
    bool found=false;
    
    for(int i=0;i<size;i+=2){
        if(s[i]==t){
            found=true;
            break;
        }
    }
    
    if(found)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
