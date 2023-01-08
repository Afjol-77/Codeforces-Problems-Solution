#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long long int a[n];
    vector<long long int> v(n);
    int length=1,max=1;
    
    for(int i=0;i<n;i++)
        cin >> a[i];
        
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            length++;
            
            if(length>max)
                max=length;
            }
            
        else if(a[i]>=a[i+1]){
            length=1;
        }
    }
    cout<<max<<endl;
    
    return 0;
}
