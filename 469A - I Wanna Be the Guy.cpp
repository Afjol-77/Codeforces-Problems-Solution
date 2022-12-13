#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int l,p,q,arr[200],count = 0;;
    cin >> l;
    cin >> p;
    
    for(int i=0;i<p;i++){
        cin >> arr[i];
    }
    cin >> q;
    
    for(int i=p;i<p+q;i++){
        cin >> arr[i];
    }
    sort(arr,arr+(p+q));
    
    for(int i=0;i<p+q;i++){
        if(arr[i] != arr[i+1])
            count++; //For each case, integers are distinct.
    }
    
    if(count==l)
        cout << "I become the guy." ;
    else
        cout << "Oh, my keyboard!" ;
    return 0;
}
