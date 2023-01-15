#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;
        int total=(a*1)+(b*2);
        
        if(a==0)
            cout<<1<<endl;
        else
            cout<<total+1<<endl;
        
    }
}
