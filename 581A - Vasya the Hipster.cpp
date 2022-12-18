#include<iostream>
using namespace std;

int main()
{
        int a,b,c=0,d=0;
        cin >> a >> b;
        
        while(true){
            if(a>=1 && b>=1){
            a -= 1;
            b -= 1;
            c++;
        }
        else if(a>=2){
            a -= 2;
            d++;
        }
        else if(b>=2){
            b -= 2;
            d++;
        }
        else
            break;
        }
        
        cout << c <<" " << d << endl;
        return 0;
}
        
    
