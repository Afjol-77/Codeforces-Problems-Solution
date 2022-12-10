#include <iostream>
#include<string>

using namespace std;

int main(){
    string s,t;
    int i,size,y=0,n=0;
    cin >> s;
    cin >> t;
    size = s.size();
    
    for(i=0;i<size;i++)
    {
        if(s[i] == t[(size-1)-i])
            y++;
        else
            n++;
    }
    
    if (y==size)
        cout << "YES" ;
    else
        cout << "NO" ;
          
    return 0;
}
