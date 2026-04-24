// Problem Link - https://codeforces.com/problemset/problem/1352/A
// important constraint - 1 <= n <= 10,000

#include<bits/stdc++.h>
using namespace std;

void solve(){
        int n;
        cin >> n;
        vector<int> v1;
        vector<int> v2 = {10, 100, 1000, 10000, 100000};

        for(auto &it:v2){
            if (n % it != 0)
            {
                v1.push_back(n % it);
                n -= n % it;
            }
        }

        cout << v1.size() << endl; // number of round numbers
        for (auto &it:v1) // round numbers
        {
            cout << it << " ";
        }
        cout << endl;    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/* beginner code - 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k=0;
        cin >> n;
        vector<int> v;
        if(n==10000){
            cout << 1 << endl << 10000 << endl;
        }
        else {
            while(n!=0){
                if(n%10!=0){
                    k++;
                    v.push_back(n%10);
                    n-=n%10;
                }
                if(n%100!=0){
                    k++;
                    v.push_back(n%100);
                    n-=n%100;
                }
                if(n%1000!=0){
                    k++;
                    v.push_back(n%1000);
                    n-=n%1000;
                }
                if(n%10000!=0){
                    k++;
                    v.push_back(n%10000);
                    n-=n%10000;
                }
            }
            cout << k << endl;
            for(int i=0;i<v.size();i++){
                cout << v[i] << " ";
            }
            cout << endl;
            }
    }
    return 0;
}
*/