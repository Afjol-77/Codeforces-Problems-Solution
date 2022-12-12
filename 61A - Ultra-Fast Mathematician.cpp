#include <iostream>
#include <string>

using namespace std;

int main(){
    string a,b;
    cin >> a;
    cin >> b;
    
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i])
            a[i] = '1';
        else
            a[i] = '0';
    }
    cout << a;
    return 0;
}
