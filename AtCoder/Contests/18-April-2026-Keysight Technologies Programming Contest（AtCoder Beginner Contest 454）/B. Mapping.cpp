// Problem Link - https://atcoder.jp/contests/abc454/tasks/abc454_b


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    // first
    if(n>m) cout << "No\n";
    else{
        int count1 = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && v[i] == v[j]) count1 = 1;
            }
        }
        if(count1 == 0) cout << "Yes\n";
        else cout << "No\n";
    }
    // second
    if(n<m) cout << "No\n";
    else{
        int count2 = 0;
        for(int i=1;i<=m;i++){
            for(int j=0;j<n;j++){
                if(i == v[j]){
                    count2++;
                    break;
                }
            }
        }
        if(count2 == m) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}