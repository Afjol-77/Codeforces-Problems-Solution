#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        int k,ans,count=0;
        cin >> k;
        
        for(int i=1;;i++){
            if(i%3 != 0 && i%10 != 3)
                count++;
                
            if(count==k){
                ans=i;
                break;
            }
                
        }
        cout << ans << endl;
    }
    
    return 0;
}
