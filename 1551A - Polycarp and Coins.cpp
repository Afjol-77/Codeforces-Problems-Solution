#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,d,a=0,b=0;
        cin >> n;
        a=n/3;
        b=a;
        
        
        if(n%2 == 0){
            if(a%2 != 0)
                a++;
            else if(a%2 ==0 && n%3!=0)
                b++;
        }
        
        else if(n%2 != 0){
            if(a%2 == 0)
                a++;
            else if(a%2 != 0 && n%3!=0) 
                b++;
        }
        cout<<a<<" "<<b<<endl;
    
    }
}
