// Problem Link - https://codeforces.com/contest/263/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5][5];
    pair<int,int> p;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> arr[i][j];
            if(arr[i][j]==1){
                p.first = i;
                p.second = j;
            }
        }
    }

    /* bcoz our destination is arr[2][2]*/
    int ans = abs(p.first-2) + abs(p.second-2);
    cout << ans << "\n";

    // cout << p.first << p.second;
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }    
    return 0;
}