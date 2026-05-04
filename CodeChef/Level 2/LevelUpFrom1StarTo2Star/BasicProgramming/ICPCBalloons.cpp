// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/BALLOON

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        int n,c=0;
        cin >> n;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(1<=x && x<=7){
                c++;
            }
            if(c==7){
                c++;
                cout << i+1 << endl;
            }
        }
    }
}
