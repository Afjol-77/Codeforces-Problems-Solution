#include<bits/stdc++.h>
using namespace std;

void solve(){
long long m,ans; cin>>m;

for(int i=1;i<=10;i++){
    if(m<pow(10,i)){
        ans=m-pow(10,i-1);
        break;
    }
}
cout<<ans<<endl;
}

int main(){
int t;cin>>t;
while(t--){
    solve();
}
}
