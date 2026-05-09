// Problem Link - https://atcoder.jp/contests/abc457/tasks/abc457_c
// incorrect

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;

    vector<vector<int> > A(n);

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        A[i] = vector<int>(x);
        for(int j=0;j<x;j++){
            cin >> A[i][j];
        }
    }

    vector<int> C(n);
    for(int i=0;i<n;i++){
        cin >> C[i];
    }

    vector<int> B;

 
        for (int j = 0,x = 0; j < n,x<n; j++){
            for(int i=0;i<C[x];i++){
                for (int k = 0; k < A[j].size(); k++){
                    B.push_back(A[j][k]);
                }
            }
        }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<A[i].size();j++){
    //         cout << A[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    for(auto &it:B){
        cout << it << " ";
    }
    return 0;
}