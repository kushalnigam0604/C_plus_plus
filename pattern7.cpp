#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,row,col;
    cin>>row>>col;
    while(i<=row){
        j=1;
        while(j<=i){
            cout<<i<<" " ;
            j++;
        }
        cout<<endl;
        i++;
    }
}