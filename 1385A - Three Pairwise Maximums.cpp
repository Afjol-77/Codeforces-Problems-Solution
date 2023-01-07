#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long int a[3];
        for(int i=0;i<3;i++) cin >> a[i];
        sort(a,a+3);
        long long int count=0,max=a[2];
        
        for(int i=0;i<3;i++){
            if(max==a[i])
                count++;
        }
        
        if(count<2) cout<<"NO"<<endl;
        else if(count==2){
            cout<<"YES"<<endl;
            cout<<max<<" "<<a[0]<<" "<<1<<endl;
        }
        else if(count==3){
            cout<<"YES"<<endl;
            cout<<max<<" "<<max<<" "<<max<<endl;
        }
        
    }
    return 0;
}
