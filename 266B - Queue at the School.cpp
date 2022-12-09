#include <iostream>

using namespace std;

int main(){
    int n,t,i,j;
    cin >> n >> t;
    string s;
    
    for(i=0;i<n;i++){
        cin >> s;
    }
    
    for(i=1;i<=t;i++){
        
        for(j=0;j<n-1;j++){
            
            if(s[j] == 'B' && s[j+1] == 'G'){
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }
    cout << s << endl; 
          
    return 0;
}
