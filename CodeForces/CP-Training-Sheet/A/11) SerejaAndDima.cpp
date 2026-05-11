// Problem Link - https://codeforces.com/contest/381/problem/A

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

    int sVal = 0, dVal = 0;
    int l=0;
    int r=n-1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(v[l]>v[r]){
                sVal += v[l];
                l++;
            }
            else{
                sVal += v[r];
                r--;
            }
        }
        else{
            if(v[l]>v[r]){
                dVal += v[l];
                l++;
            }
            else{
                dVal += v[r];
                r--;
            }            
        }
    }
    
    cout << sVal << " " << dVal;
    
    return 0;
}