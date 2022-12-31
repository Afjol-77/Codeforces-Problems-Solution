#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
    
    int n,j=0,sum1=0,sum2=0; 
    cin >>n;
    
    int a[n];
    
    for(int i=1;i<=n;i++) a[j++]=pow(2,i);
    
    int mid=n/2;
    
    sum1=a[n-1];
    
    for(int i=0;i<mid-1;i++) sum1+=a[i];
    
    for(int i=mid-1;i<n-1;i++) sum2+=a[i];
    
    int ans=abs(sum1-sum2);
    cout<<ans<<endl;
    
    }
}
