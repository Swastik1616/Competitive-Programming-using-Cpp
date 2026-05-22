// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ENCMSG

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        //step1
        for(int i=0;i<n;i+=2){
            if(i!=n-1){
                char temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
            }
        }
        
        //step2 'a'=97, 'z'=122, sum = 97 + 122 = 219 - same for all.
        for(int i=0;i<n;i++){
            s[i] = 219 - s[i];
        }
        
        cout << s << "\n";
    }
}