// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/ALPHABET

#include <bits/stdc++.h>
using namespace std;

bool searchChar(string s, char c){
    int l = 0;
    int r = s.size()-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(c==s[mid]) return true;
        else if(c>s[mid]) l = mid + 1;
        else r = mid - 1;
    }
    return false;
}

int main() {
	// your code goes here
    string s;
    cin >> s;
    
    int n;
    cin >> n;
    
    vector<string> v(n);
    
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    
    sort(s.begin(),s.end());
    
    for(int i=0;i<n;i++){
        int c = 0;
        for(int j=0;j<v[i].size();j++){
            if(searchChar(s,v[i][j])){
                c++;
            }
            else{
                c=0;
                break;
            }
        }
        if(c==0) cout << "No\n";
        else cout << "Yes\n";
    }
}