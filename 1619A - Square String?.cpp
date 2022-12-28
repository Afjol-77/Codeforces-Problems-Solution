#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        
        string s;
        cin >> s;
        int size=s.size();
        int mid=size/2;
        
        int count=0;
        
        if(size%2 != 0)
            cout<<"NO"<<endl;
        
        else{
        for(int i=0;i<mid;i++){
            if(s[i] == s[mid+i])
                count++;
        }
        
        if(count==mid)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
