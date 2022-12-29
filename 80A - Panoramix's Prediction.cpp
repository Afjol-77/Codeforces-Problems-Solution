#include<iostream>

using namespace std;

int main(){
    int m,n;
    cin >> n>>m;
    
    bool ans,prime;
    
    for(int i=n+1;;i++){
        
        prime=true;
        ans=false;
        
        for(int j=2;j<=i/2;j++){
            if(i%j == 0)
                prime=false;
            if(!prime)
                break;
            }
        
        if(prime){
            if(i==m)
                ans=true;
            break;
            }
    }
    
    if(ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
        
    return 0;
}
