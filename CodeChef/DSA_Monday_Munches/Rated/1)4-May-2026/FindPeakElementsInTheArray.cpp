// Problem Link - https://www.codechef.com/DSAMONDAY001/problems/PEAKINARRAY1

#include<bits/stdc++.h>
using namespace std;

vector<int> findPeaks(vector<int>& A, int n) {

    vector<int> ans;
    if(A[0]>A[1]) ans.push_back(A[0]);
    
    for(int i=1;i<n-1;i++){
        if(A[i]>A[i-1] && A[i]>A[i+1]) ans.push_back(A[i]);
    }
    
    if(A[n-1]>A[n-2]) ans.push_back(A[n-1]);
    
    if(ans.size()==0) ans.push_back(-1);
    return ans;
}

int main(){

    return 0;
}