#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,cards[5],ans="";
    cin >> a;

    for(int i=0;i<5;i++){
        cin >> cards[i];
        ans+=cards[i];
    }

    bool found=false;

    for(int i=0;i<10;i++){
        if(ans[i]==a[0] | ans[i]==a[1])
            found=true;
    }

    if(found)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
