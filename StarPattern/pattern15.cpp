#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>> row>>col;
    int i=1,j=1;
    char x = 'A';
    while(i<=row){
        j=1;
        x = 'A' + i -1;
        while(j<=i){
            cout<<x<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}