#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printName(int n){
    if(n==0){
        return;
    }
    printName(n-1);
    cout<<"kushal" << endl;
}

int main()
{
    int n;
    cin>>n;
    printName(n);
    return 0;
}