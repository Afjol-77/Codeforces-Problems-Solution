#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    while(t--){
        int n; cin >> n; 
        int a[n], mid=n/2;
        
        for(int i=0;i<n;i++)
            cin >> a[i];
        
        for(int i=0;i<mid;i++){
            cout<<a[i]<<" "<<a[n-i-1]<<" ";
        }
        
        if(n%2!=0)
            cout<<a[mid];
        
        cout<<endl;
    }
    return 0;
}
