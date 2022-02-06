#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>> row>>col;
    int i=1,j=1;
    char x = 'A';int count = 1;
    while(i<=row){
        j=1;
        while(j<=i){
            x = 'A' + count -1;
            cout<<x<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}