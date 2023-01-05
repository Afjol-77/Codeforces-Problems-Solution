#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        string s; cin >> s;
        string name="Timur";
        
        sort(s.begin(),s.end());
        sort(name.begin(),name.end());
        
        if(s==name)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
