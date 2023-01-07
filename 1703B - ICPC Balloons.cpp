#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        string s; cin >> s;
        set<char>ft;
        
        for(int i=0;i<s.size();i++){
            ft.insert(s[i]);
        }
        
        int first=ft.size();
        int regular=n-first;
        int sum=(first*2)+regular;
        
        cout<<sum<<endl;
        }
    return 0;
}
