#include <iostream>

using namespace std;

int main(){
    int n,i,r=0;
    cin >> n;
    int p[n],q[n];
    for(i=0;i<n;i++){
        cin >> p[i] >> q[i];
    }
    
    for(i=0;i<n;i++){
        if(p[i]+2 <= q[i])
            r++;
    }
    cout << r;
    
    return 0;
}
