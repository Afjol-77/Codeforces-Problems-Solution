#include<iostream>

using namespace std;

int main()
{
        int n,k;
        cin >> n >> k;
        int a = 240-k, b=0, count=0;
        
        for(int i=1;i<=n;i++){
                
                b = b + (5*i);
               
                if(b>a)
                    break;
                
                count++;
        }
        cout << count;
        return 0;
}
        
    
