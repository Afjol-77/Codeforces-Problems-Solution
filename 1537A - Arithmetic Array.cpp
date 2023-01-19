#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n],ans,sum=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum==n)
        ans=0;
    else if(sum<n)
        ans=1;
    else if(sum>n)
        ans=sum-n;
        
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
