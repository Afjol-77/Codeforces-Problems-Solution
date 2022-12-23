#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
        int n,max,count=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        
        max = a[0];
        
        for(int i=1;i<n;i++){
            if(max<a[i])
                max=a[i];
        }
        
        sort(a,a+n);
        for(int i=0;i<n;i++){
            int b = max-a[i];
            if(b==0)
                break;
            else
                count = count+b;
        }
        
        cout << count;
        return 0;
}
        
    
