#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        
        if(a>b)
            swap(a,b);
            
        int maxi= max(a*2,b);
        cout<< pow(maxi,2) << endl;
    }
    
    return 0;
}
