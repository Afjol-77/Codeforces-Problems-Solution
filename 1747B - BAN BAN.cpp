#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s="#";
        for(int i=0;i<n;i++)
            s=s+"BAN";
        
        n=s.size()-1;
        vector<pair<int,int>> ans;
        int left=2,right=n;
        
        while(left<right){
            ans.push_back({left,right});
            left+=3;
            right-=3;
        }
        
        cout<<ans.size()<<endl;
        for(auto it:ans)
            cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
