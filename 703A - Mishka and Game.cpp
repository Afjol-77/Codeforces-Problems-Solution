#include <iostream>

using namespace std;

int main() {
    
    int n,mishka=0,chris=0;
    cin >> n;
    int a[n],b[n];
    
    for(int i=0;i<n;i++){
        
        cin >> a[i] >> b[i];
        
        if(a[i] > b[i])
            mishka++;
        else if(a[i] < b[i])
            chris++;
    }
    
    if(mishka>chris)
        cout<<"Mishka"<<endl;
        
    else if(chris > mishka)
        cout<<"Chris"<<endl;
        
    else
        cout<<"Friendship is magic!^^" <<endl;
    return 0;
}
