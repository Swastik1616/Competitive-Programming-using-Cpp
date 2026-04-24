// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/SPCP4

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x,k;
        cin >> n >> x >> k;
        
        int girls = n-x;
        int boyGroups = x/k;
        int girlGroups = girls/k;
        
        int remBoys = x - (boyGroups*k);
        int remGirls = girls - (girlGroups*k);
        
        int danceCount = abs(remBoys-remGirls);
        
        cout << danceCount << endl;
    }
}
