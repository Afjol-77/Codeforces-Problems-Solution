#include <iostream>

using namespace std;

int main(){
    int n,i,g = 1;
    cin >> n;
    int a[n];
    
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    
    for(i=0;i<n-1;i++){
        if(a[i] != a[i+1])
            g++;
    }
    cout << g ;
    return 0;
}
