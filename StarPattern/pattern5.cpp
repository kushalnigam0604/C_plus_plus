#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,row,col;
    int count=1;
    cin>>row>>col;
    while(i<=row){
        j=1;
        while(j<=col){
            cout<<count <<" " ; 
            count++;           
            j++;
        }
        cout<<endl;
        i++;
    }
}