#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    while(t--){
        int n; cin >> n;
        int len=2*n;
        int a[len],even=0,odd=0;
        
        for(int i=0;i<len;i++){
            cin >> a[i];
            
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        
        if(even==odd)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
