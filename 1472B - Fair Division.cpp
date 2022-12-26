#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n,odd=0,even=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        
        for(int i=0;i<n;i++){
            if(a[i] == 1)
                odd++;
            else
                even++;
        }
        if((n%2==0 && odd%2==0) | (n%2!=0 && odd%2== 0 && odd>0))
            cout<<"YES" <<endl;
        else
            cout<<"NO" <<endl;
    }
    
    return 0;
}
