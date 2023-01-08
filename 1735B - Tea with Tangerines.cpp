#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++) cin >> a[i];
        int x=(a[0]*2)-1;
        int ans=0;
        
        for(int i=0;i<n;i++){
            ans+=a[i]/x;
            if(a[i]%x==0)
                ans--;
        }
        
        cout<<ans<<endl;
        }
    return 0;
}
