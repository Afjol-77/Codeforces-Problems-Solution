#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >>n>>m;
    
    bool color=false;
    
    char a[100][100];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            
            if(a[i][j] == 'C' | a[i][j] == 'M' | a[i][j] == 'Y')
                color=true;
        }
    }
    
    if(color)
        cout<<"#Color";
    else
        cout<<"#Black&White";
    return 0;
}
