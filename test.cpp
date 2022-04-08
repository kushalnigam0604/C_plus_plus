#include <iostream>
#include <string>
using namespace std;

int main(){
    float n;
    cin >> n;
    string s = to_string(n);
    int q = s.find(".");
    string integer = "";
    string Float = "";
    for(int i=0;i<q;i++){
        integer = integer + s[i];
    }
    for(int i=q+1;i<s.size()-4;i++){
        Float = Float + s[i];
    }
    cout<<"Integer : " <<integer<<endl;
    cout<<"Float : " <<Float<<endl;

    return 0;
}