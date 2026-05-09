// Problem Link - https://codeforces.com/contest/405/problem/A

/* bro this problem looked so scary but it was so simple,
logically due to gravity shift, the tallest tower of cube
will be on the rightmost side and smallest on leftmost,
and that is just SORTING in increasing order. THAT'S IT,
I am amazed*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    for(auto &it:v){
        cout << it << " ";
    }
    return 0;
}