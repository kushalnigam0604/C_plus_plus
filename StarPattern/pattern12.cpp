#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,row,col;
    char ch = 'A';
    cin>>row>>col;
    while(i<=row){
        j=1;
        while(j<=col){
            ch = 'A'+j-1;
            cout<<ch<<" " ;
            j++;
        }
        cout<<endl;
        i++;
    }
}