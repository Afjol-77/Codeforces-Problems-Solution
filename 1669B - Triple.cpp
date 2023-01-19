#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n],count=1,ans;
    bool found=false;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    
    if(n<3)
        cout<<-1<<endl;
    
    else if(n>=3){
        
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1])
                count=1;
            else
                count++;
            
            if(count==3){
                ans=a[i];
                found=true;
                break;
            }
        }
    if(found)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
