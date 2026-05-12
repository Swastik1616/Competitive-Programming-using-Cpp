#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &v, int target){
    for(int i=0;i<v.size();i++){
        if(target==v[i]) return i;
    }
    return -1;
}

int binarySearch(vector<int> &v, int target){
    int l = 0;
    int r = v.size() - 1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(target==v[mid]) return mid;
        else if(target>v[mid]) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
    // return l - lowerbound/index if elem would have been there
}

int lowerBound(vector<int> &v, int target){
    int n = v.size();
    int l = 0;
    int r = n - 1;
    int ans = n;

    while(l<=r){
        int mid = (l+r)/2;
        if(target>=v[mid]){
            ans = min(ans,mid);
            r = mid - 1;
        }
        else l = mid + 1;
    }

    return ans;
}

int upperBound(vector<int> &v, int target){
    int n = v.size();
    int l = 0;
    int r = n - 1;
    int ans = n;

    while(l<=r){
        int mid = (l+r)/2;
        if(target>v[mid]){ // only difference
            ans = min(ans,mid);
            r = mid - 1;
        }
        else l = mid + 1;
    }

    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    return 0;
}