// Problem Link - https://atcoder.jp/contests/abc457/tasks/abc457_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int> > arr(n);

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr[i] = vector<int>(x);
        for(int j=0;j<x;j++){
            cin >> arr[i][j];
        }
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    int x,y;
    cin >> x >> y;
    cout << arr[x-1][y-1];
    return 0;
}