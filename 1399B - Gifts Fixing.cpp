#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int a[n],b[n];
        
        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<n;i++)
            cin >> b[i];
            
        int mina = a[0];
        int minb = b[0];
        
        for(int i=0;i<n;i++){
            if(mina>a[i])
                mina=a[i];
                
            if(minb>b[i])
                minb=b[i];
        }
        
        long long int count=0;
        
        for(int i=0;i<n;i++){
         int  c= a[i]-mina;
         int d=b[i]-minb;
         count=count+max(c,d);
        }
        
        cout<<count<<endl;
    }
    return 0;
}
