/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATHPRO/problems/TESTAVG
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        // your code goes here
        int avg1 = (a+b)/2;
        int avg2 = (a+c)/2;
        int avg3 = (b+c)/2;
        if(avg1<35 || avg2<35 || avg3<35) cout << "Fail\n";
        else cout << "Pass\n";
    }

}
