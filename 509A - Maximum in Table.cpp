#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[100][100];
    for(int i=1;i<=1;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=1;
            a[j][i]=1;
        }
    }
    
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++){
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    
    cout<<a[n][n];
    return 0;
}
