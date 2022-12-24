#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        int x,y,n;
        cin >> x >> y >> n;
        
        int a=n/x;
        int b=x*a;
        int ans= b+y;
        
        while(ans>n){
            a--;
            b=x*a;
            ans=b+y;
        }
        cout << ans <<endl;
    }
    return 0;
}
