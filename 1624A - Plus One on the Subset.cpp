#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin >> a[i];
        
        sort(a,a+n);
        int max=a[n-1];
        
        int ans=a[n-1] - a[0];
        
        cout << ans <<endl;
    }
    
    return 0;
}
