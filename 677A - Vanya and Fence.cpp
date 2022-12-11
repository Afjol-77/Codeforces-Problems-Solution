#include <iostream>

using namespace std;

int main(){
    int n,h, i,w=0;
    cin >> n >>h;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    
    for(i=0;i<n;i++){
        if(a[i]>h)
            w+=2;
        else
            w+=1;
    }
    cout << w << endl;
    
    return 0;
}
