// // Problem Link - https://atcoder.jp/contests/abc457/tasks/abc457_c
// // incorrect

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n,k;
//     cin >> n >> k;

//     vector<vector<int> > A(n);
//     vector<int>sizes;
//     for(int i=0;i<n;i++){
//         int x;
//         cin >> x;
//         sizes.push_back(x);
//         A[i] = vector<int>(x);
//         for(int j=0;j<x;j++){
//             cin >> A[i][j];
//         }
//     }

//     vector<int> C(n);
//     for(int i=0;i<n;i++){
//         cin >> C[i];
//     }

//     // for(int i=0;i<n;i++){
//     //     for(int j=0;j<A[i].size();j++){
//     //         cout << A[i][j] << " ";
//     //     }
//     //     cout << "\n";
//     // }

//     for(auto &it:sizes){
//         cout << it << " ";
//     }
//     return 0;
// }