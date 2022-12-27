#include<bits/stdc++.h>

using namespace std;
int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n; cin >> n;
        vector<long long int>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        
        sort(a.begin(),a.end());
        
        while((a[n-2] * a[n-1]) != a[n-1])
            {
                a[n-1] =a[n-1] *a[n-2];
                a[n-2] = 1;
                sort(a.begin(),a.end());
            }
       long long int sum=0;
       
       for(int i=0;i<n;i++) sum+=a[i];
    
       cout<< sum*2022 <<endl;
    }
    return 0;
}
