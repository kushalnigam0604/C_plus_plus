#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,row,col;
    cin>>row>>col;
    while(i<=row){
        j=1;
        while(j<=i){
            cout<<(i-j+1)<<" " ;
            j++;
        }
        cout<<endl;
        i++;
    }
}

    // using count -- 

    // int i=1,j=1,row,col,count=1;
    // cin>>row>>col;
    // while(i<=row){
    //     j=1;
    //     count = i;
    //     while(j<=i){
    //         cout<<count<<" " ;
    //         count--;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }