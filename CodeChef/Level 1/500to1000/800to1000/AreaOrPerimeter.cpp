// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/AREAPERI

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    float l,b;
    cin >> l;
    cin >> b;
    float area = l * b;
    float perimeter = 2 * (l + b);
    if(area>perimeter){
        cout << "Area" << endl;
        cout << area << endl;
    }
    else if(perimeter>area){
        cout << "Peri" << endl;
        cout << perimeter << endl;
    }
    else cout << "Eq" << endl << area;
}
