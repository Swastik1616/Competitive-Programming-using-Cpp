/* Problem - Given a 2D array, calculate its 2D Prefix array
and then given q queries, calculate the sum of the elements
of the rectangle formed by the coordinates in each query
*/
/* Note that 2D Prefix sum till a point (i,j) is not
the sum of all elements from (0,0) to (i,j), rather
it is the sum of all elements of the rectangle with diagnol
 as line joined by (0,0) & (i,j)
 */

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n = #rows , m = #columns
    int n,m;
    cin >> n >> m;
    vector<vector<int>>v(n,vector<int>(m));

    // taking input of 2D Array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }

    vector<vector<int>>pre(n,vector<int>(m));
    // prefix sum till (i,j)
    // pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + v[i][j];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            pre[i][j] = v[i][j];
            if(i>0) pre[i][j] += pre[i-1][j];
            if(j>0) pre[i][j] += pre[i][j-1];
            if(i>0 && j>0) pre[i][j] -= pre[i-1][j-1];
        }
    }

    // // printing the 2D prefix sum array
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout << pre[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    // given q queries to fing 2D prefix sum from (r1,c1) to (r2,c2);
    int q;
    cin >> q;
    while(q--){
        int r1,c1,r2,c2;
        cin >> r1 >> c1 >> r2 >> c2;
        // req sum = pre[r2][c2] - pre[r1-1][c2] - pre[r2][c1-1] + pre[r1-1][c1-1];
        int ans = pre[r2][c2];
        if(r1>0) ans -= pre[r1-1][c2];
        if(c1>0) ans -= pre[r2][c1-1];
        if(r1>0 && c1>0) ans += pre[r1-1][c1-1];
        cout << ans << "\n";
    }
    return 0;
}