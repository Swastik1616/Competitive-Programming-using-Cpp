// Problem Link - https://codeforces.com/contest/339/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin,s);
    vector<char>v;
    if(s.size()==1) cout << s[0];
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]=='+') continue;
            else v.push_back(s[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++) cout << v[i] << "+";
        cout << v[v.size()-1];
    }
    return 0;
}