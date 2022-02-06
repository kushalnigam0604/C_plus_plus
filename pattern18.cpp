#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int i = 1,j=1;
    char ch = 'A';
    while(i<=row){
        j=1;
        ch = 'A' + row - i;
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}