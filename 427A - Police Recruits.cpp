#include<iostream>

using namespace std;

int main()
{
        int n,count=0,untreat=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            
            if(a[i] != -1)
                count += a[i];
            else if(a[i] == -1 && count>=1)
                count -= 1;
            else if(a[i] == -1 && count<1)
                untreat++;
        }
        cout << untreat;
        return 0;
}
        
    
