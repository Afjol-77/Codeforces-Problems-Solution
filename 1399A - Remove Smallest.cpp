#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
        int t,n,d;
        cin >> t;
        while(t--){
            cin >> n;
            int a[n];
            for(int i=0;i<n;i++){
                cin >> a[i];
            }
            
            sort(a,a+n);
            bool decision = true;
            for(int i=0;i<n-1;i++){
                d = abs(a[i] - a[i+1]);
                
                if(d>1)
                    decision = false;
            }
            
            if(decision)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        return 0;
}
        
    
