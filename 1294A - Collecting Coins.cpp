#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long int a,b,c,n;
        cin >> a>>b>>c>>n;
        int maxi=max(a,max(b,c));
        long long int dif=0;
        
        if(a!=maxi)
            dif+=maxi-a;
        if(b!=maxi)
            dif+=maxi-b;
        if(c!=maxi)
            dif+=maxi-c;
            
        if(n>=dif){
            n=n-dif;
            if(n%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}
