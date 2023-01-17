#include<bits/stdc++.h>
using namespace std;

void solve(){
   int a,b,n,count=0;
   cin >>a>>b>>n;
   
   for(int i=0;;i++){
       if(a<b)
           a+=b;
        else
            b+=a;
        count++;
        
        if(a>n || b>n)
            break;
   }
   cout<<count<<endl;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
