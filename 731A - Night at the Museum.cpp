#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
   
    int size=s.size();
    char start='a';
    int count=0;
    
    for(int i=0;i<size;i++){
        
        int a= start - s[i];
        int b= s[i] - start;
            
        if(a<0)
             a+=26;
        if(b<0)
            b+=26;
                
        count+=min(a,b);
            
        start=s[i];
        }
        
    cout<<count<<endl;
    return 0;
}
