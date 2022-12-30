#include<iostream>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int h,w,n;
        cin >>h>>w>>n;
        int ans=1;
        
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        
        while(h%2==0){
            ans*=2;
            h/=2;
        }
        
        while(w%2==0){
            ans*=2;
            w/=2;
        }
        
        if(ans>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}
