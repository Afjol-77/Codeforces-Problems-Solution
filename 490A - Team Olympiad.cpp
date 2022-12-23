#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
        int n;
        cin >> n;
        vector<int> p,m,s;
        for(int i=1;i<=n;i++){
            int a;
            cin >> a;
            
            if(a == 1)
                p.push_back(i);
            else if( a == 2)
                m.push_back(i);
            else if(a == 3)
                s.push_back(i);
        }
        
        int ans = min(p.size(), min(m.size(), s.size()));
        cout << ans << endl;
        
        for(int i=0;i<ans;i++){
            cout<<p[i] <<" "<<m[i]<<" "<<s[i] << endl;
        }
        
        return 0;
}
        
    
