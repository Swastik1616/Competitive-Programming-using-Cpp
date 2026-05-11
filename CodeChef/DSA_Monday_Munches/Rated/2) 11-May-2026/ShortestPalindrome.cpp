//Problem Link - https://www.codechef.com/DSAMONDAY002/problems/SHORTPALINDR
// Partially correct

#include<bits/stdc++.h>
using namespace std;

string shortestPalindrome(const string& s) {
    //write your code here...
    string rev = s;
    reverse(rev.begin(), rev.end());
    
    if(s==rev) return s;
    
    string temp = "";
    for(int i=0;i<rev.size();i++){
        temp += rev[i];
    }
    for(int i=0;i<s.size();i++){
        temp += s[i];
    }
    
    string ans = "";
    for(int i=0;i<temp.size();i++){
        if(temp[i]!=temp[i+1]) ans += temp[i];
    }
    
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    return 0;
}