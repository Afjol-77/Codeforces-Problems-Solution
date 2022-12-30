#include<iostream>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long int n,count=0;
        cin >>n;
        
        for(long long int i=1;i<=9;i++){
            long long int j=i;
            while(j<=n){
                count++;
                j=(j*10)+i;
            }
        }
        
        cout<<count<<endl;
        
    }
    return 0;
}
