#include<iostream>

using namespace std;

int main(){
    int n;
    cin >>n;
    
    int sum=0,total=0,count=0;
    
    for(int i=1;;i++){
            sum+=i;
            total+=sum;
            
            if(total>n)
                break;
            
            count++;
    }
    
    cout<<count;
    return 0;
}
