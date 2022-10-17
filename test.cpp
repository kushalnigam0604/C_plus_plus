#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    for (int i = 0; i <= N - M; i++) {
        int j =0;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}

int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int res = isSubstring(s2, s1);
    if (res == -1)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}