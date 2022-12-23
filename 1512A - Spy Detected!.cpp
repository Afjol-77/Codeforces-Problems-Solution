#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n];
            
            for(int i=0;i<n;i++){
                cin >> a[i];
            }
            
            bool index = false;
            
            for(int i=1;i<n-1;++i){
                if(a[i] != a[i-1] && a[i] != a[i+1]){
                    cout << i+1 <<endl;
                    index = true;
                }
            }
            
            if(!index){
                if(a[0] != a[1])
                    cout << 1 <<endl;
                else
                    cout << n <<endl;
            }
        }
        
        return 0;
}
        
    
