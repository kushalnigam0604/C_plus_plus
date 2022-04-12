#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,row,col,count=1;
    char ch = 'A';
    cin>>row>>col;
    while(i<=row){
        j=1;
        while(j<=col){
            ch = 'A'+count-1;
            cout<<ch<<" " ;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}