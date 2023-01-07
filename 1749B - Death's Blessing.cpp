#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long int n; cin >> n;
        vector<long long int> v1(n),v2(n);
        
        long long int sum1=0,sum2=0;
        for(long long int i=0;i<n;i++){
        cin >> v1[i];
        sum1+=v1[i];
        }
        
        for(long long int i=0;i<n;i++){
        cin >> v2[i];
        sum2+=v2[i];
        }
        
        long long int ans=sum1+sum2;
        
        sort(v2.begin(),v2.end());
        ans-=v2[n-1];
        
        cout<<ans<<endl;
    }
    return 0;
}
