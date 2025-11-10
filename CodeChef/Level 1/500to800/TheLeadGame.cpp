/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TLG
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    
    vector<int> p1;
    vector<int> p2;
    
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        p1.push_back(x);
        p2.push_back(y);
    }
    
    for(int i=1;i<n;i++){
            p1[i] += p1[i-1];
            p2[i] += p2[i-1];
    }
    
    vector<int>lead1;
    vector<int>lead2;
    
    for(int i=0;i<n;i++){
        if(p1[i]>p2[i]) lead1.push_back(p1[i]-p2[i]);
        else if(p2[i]>p1[i]) lead2.push_back(p2[i]-p1[i]);
    }
    
    int m1 = (lead1.empty()) ? INT_MIN : lead1[0];
    int m2 = (lead2.empty()) ? INT_MIN : lead2[0];
    
    int s = max(lead1.size(),lead2.size());

    for(int i=0;i<s;i++){
        if(i < lead1.size() && lead1[i]>m1) { 
            m1 = lead1[i];
        }
        if(i < lead2.size() && lead2[i]>m2) { 
            m2 = lead2[i];
        }
    }
    
    if(m1>m2) cout << 1 << " " << m1 << endl;
    else if(m2>m1) cout << 2 << " " << m2 << endl;
    
}
