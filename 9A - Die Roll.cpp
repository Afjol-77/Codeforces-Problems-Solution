#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int maxi= max(a,b);
    
    string s[6] ={"1/1","5/6","2/3","1/2","1/3","1/6"};
    
    cout<<s[maxi-1];
    
    return 0;
}
