// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/MILEAGE?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float n,x,y,a,b;
        cin >> n >> x >> y >> a >> b;
        float p = (n/a) * x; //petrol cost 
        float d = (n/b) * y; //diesel cost
        if(p<d) cout << "PETROL\n";
        else if(d<p) cout << "DIESEL\n";
        else cout << "ANY\n";
    }
}
