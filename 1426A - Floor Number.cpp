#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >>n>>x;
        
        int count=1,sum=0;
        
        if(n<=2)
            cout<<1<<endl;
        else if(n>2){
            n=n-2;
            for(int i=1;i<=n;i++){
                sum+=x;
                count++;
                
                if(sum>=n)
                    break;
            }
        cout<<count<<endl;
        
        }
    }
    return 0;
}
