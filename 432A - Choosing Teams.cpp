#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
        int n,k,count=0;
        cin >> n >> k;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        
        sort(a,a+n);
        for(int i=0;i<n-2;i+=3){
                int max = a[i];
                
                if(max < a[i+1])
                    max = a[i+1];
                if(max < a[i+2])
                    max = a[i+2];
            
            int b =5-max;
            if(b>=k)
                count++;
        }
        
        cout << count;
        return 0;
}
        
    
