// Problem Link - https://codeforces.com/problemset/problem/1027/A

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int n){
        int l=0;
        int r=n-1;
        while(l<r){
            char a = s[l];
            char b = s[r];
            if(a!=b){
                int diff = abs(a-b);
                if(diff != 2) return false;
            }
            l++;
            r--;
        }
        return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if(isPalindrome(s,n)) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}