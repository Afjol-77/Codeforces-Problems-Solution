#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    while(t--){
        int n,m,square,ans;
        cin >> n >> m;
        square=m*n;
        
        if(square%2==0)
            ans=square/2;
            
        else if(square%2 !=0)
            ans=(square/2)+1;
        
        cout<<ans<<endl;
    }
    return 0;
}
