// Problem Link - https://codeforces.com/contest/118/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

bool isVowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
    c=='A' || c=='E' || c=='I' || c=='O' || c=='U') return true;
    return false;
}

bool isUpper(char c){
    return (c>='A' && c<='Z');
}

char toLower(char c){
    return 'a' + (c-'A');
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,ans = "";
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(!isVowel(s[i])){
            ans += '.';
            if(isUpper(s[i])) s[i] = toLower(s[i]);
            ans += s[i];
        }
    }
    
    cout << ans;
    return 0;
}