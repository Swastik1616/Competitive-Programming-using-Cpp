// https://codeforces.com/problemset/problem/734/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a=0,d=0;
    for(int i=0;i<n;i++){
        if(s[i] == 'A') a++;
        else if(s[i] = 'D') d++;
    }
    if(a>d) cout << "Anton\n";
    else if(d>a) cout << "Danik\n";
    else cout << "Friendship\n";
    return 0;
}