// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CHEFRUN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float x1,x2,x3,v1,v2;
        cin >> x1 >> x2 >> x3 >> v1 >> v2;
        float chef = (x3-x1)/v1;
        float kefa = (x2-x3)/v2;
        if(chef<kefa) cout << "Chef\n";
        else if(kefa<chef) cout << "Kefa\n";
        else cout << "Draw\n";
    }
}
