#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,emp,count=0;
    cin>>n;
    
    for(int i=1;i<=n/2;i++){
        emp=n-i;
        
        if(emp%i==0)
            count++;
    }
    cout<<count;
}
