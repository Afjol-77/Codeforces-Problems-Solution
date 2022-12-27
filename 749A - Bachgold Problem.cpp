#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int maxi=n/2;
    cout<<maxi<<endl;
    
    if(n%2==0){
        for(int i=1;i<=maxi;i++)
            cout<<2<<" ";
    }
    
    if(n%2!=0){
        for(int i=1;i<=maxi-1;i++)
            cout<<2<<" ";
            
        cout<<3<<" ";
    }
    return 0;
}
