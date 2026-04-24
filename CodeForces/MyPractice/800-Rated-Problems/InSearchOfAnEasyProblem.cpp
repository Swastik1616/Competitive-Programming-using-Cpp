// Problem Link - https://codeforces.com/problemset/problem/1030/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x==1) {
            cout << "HARD\n";
            c++;
            break;
        }
    }
    if(c==0) cout << "EASY\n";
    return 0;
}