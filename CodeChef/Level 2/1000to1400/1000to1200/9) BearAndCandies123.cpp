// Problem Link -https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CANDY123

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int i = 1;
        int L=0,B=0;
        while(L<=a && B<=b){
            if(i%2!=0){
                L+=i;
                i++;
            }
            else{
                B+=i;
                i++;
            }
        }
        if(L<=a) cout << "Limak\n";
        if(B<=b) cout << "Bob\n";
    }
}