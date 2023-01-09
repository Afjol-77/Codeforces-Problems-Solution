#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a,b,c;
        cin >> a>>b>>c;
        int first,second;
    
        if(a==1) cout<<1<<endl;
        else{
            if(a>1) first=abs(a-1);
            if(c==1) second=abs(b-c);
            if(c>1) second=abs(b-c)+abs(c-1);
            
            if(first<second)
                cout<<1<<endl;
            else if(first>second)
                cout<<2<<endl;
            else if(first==second)
                cout<<3<<endl;
            }
    }
    return 0;
}
