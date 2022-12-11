#include <iostream>

using namespace std;

int main(){
    int n,i,h=0,e=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    
    for(i=0;i<n;i++){
        if(a[i]==1)
            h++;
        else
            e++;
    }
    
    if(h>=1)
        cout << "hard" ;
    else
        cout << "easy" ;
    
    
    return 0;
}
