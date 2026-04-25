// Problem Link - https://codeforces.com/problemset/problem/467/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        if(y-x>=2) c++;
    }
    cout << c << endl;
    return 0;
}