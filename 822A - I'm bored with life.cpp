#include<bits/stdc++.h>
using namespace std;

int main(){
long long a,b,mini,fact=1;
cin>>a>>b;
mini=min(a,b);

for(int i=1;i<=mini;i++) fact=fact*i;

cout<<fact<<endl;

}
