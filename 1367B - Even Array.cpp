#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        
        int n,odd=0,even=0;
        cin >> n;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin >> a[i];
            
            if(i%2 == 0 && a[i]%2 != 0)
                odd++;
            else if(i%2 != 0 && a[i]%2 == 0)
                even++;
        }
        
        if(odd == even)
            cout<<odd<<endl;
        else
            cout<<-1<<endl;
    }
    
    return 0;
}
