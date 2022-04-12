#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0,digit=0,ans=0;
    while(n!=0){
        digit = n%2;
        n = n/2;
        ans = (digit)* pow(10,i) + ans;
        i++;
    }
    cout<<ans <<endl;
}