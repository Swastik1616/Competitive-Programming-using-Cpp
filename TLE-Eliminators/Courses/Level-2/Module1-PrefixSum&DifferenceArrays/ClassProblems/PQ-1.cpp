/*
Problem - Given an array A of n elements and q queries of
two integers L and R in each of them, calculate the value
of A[L] + 2*A[L+1] + 3*A[L+2] + ..... + (L-R+1)*A[R];
1 <= L < R <= N
*/ 

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void bruteForce(vector<int> &v,int l, int r){
        l--;r--;
        int x = 1;
        int ans = 0;
        for(int i=l;i<=r;i++){
            ans += x*v[i];
            x++;
        }
        cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin >> n >> q;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    while(q--){
        int l,r;
        cin >> l >> r;
        bruteForce(v,l,r);
    }
    return 0;
}