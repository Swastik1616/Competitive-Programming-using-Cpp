/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SPECIALITY
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y, z;
    cin >> t;

    while (t--) {
        cin >> x >> y >> z;

        if (x > max(y, z)) {
            cout << "Setter" << endl;
        } else if (y > max(x, z)) {
            cout << "Tester" << endl;
        } else {
            cout << "Editorialist" << endl;
        }
    }

    return 0;
}
