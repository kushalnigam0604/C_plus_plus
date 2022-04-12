#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0,digit=0,ans=0;
    while(n!=0){
        digit = n%10;
        n = n/10;
        if(digit!=0){
            ans = (digit)* pow(2,i) + ans;
        }
        
        i++;
    }
    cout<<ans <<endl;
}