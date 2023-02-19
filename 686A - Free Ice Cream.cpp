#include<bits/stdc++.h>
using namespace std;

int main(){
long long n,x,d,count=0;
char c;
cin>>n>>x;

for(int i=0;i<n;i++){
    cin>>c>>d;
    if(c=='+') x+=d;
    
    else if(c=='-'){
        if((x-d)>=0) x-=d;
        else count++;
    }
}
cout<<x<<" "<<count<<endl;
}
