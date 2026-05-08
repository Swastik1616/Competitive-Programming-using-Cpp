// Problem Link - https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

bool findOp(string s){
    if(s=="X++" || s=="++X") return true;
    else return false;
}

int main(){

    int n,x=0;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(findOp(s)) x++;
        else x--;
    }
    cout << x << endl;
    return 0;
}