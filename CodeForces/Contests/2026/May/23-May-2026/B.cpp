// Problem Link - https://codeforces.com/contest/2229/problem/B
// did many silly mistakes and due to resubmissions got a lot of penalty
// bro whhy are you forgetting the constraints
// your entire logic was correct but got WA just bcoz of
// using int insead of long long, BE CAREFUE NEXT TIME

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long>a(n),b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }

        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                long long temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }

        long long bsum = 0;
        for(auto it:b) bsum += it;
        
        int amax_pos = max_element(a.begin(),a.end()) - a.begin();
        long long amax = a[amax_pos];

        cout << bsum + amax << "\n";
    }
    return 0;
}