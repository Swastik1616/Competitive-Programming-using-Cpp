// Problem Link - https://www.codechef.com/DSAMONDAY001/problems/MAJORELE2P

#include<bits/stdc++.h>
using namespace std;

vector<long long> findSuperstarDishes(vector<long long> &a, long long n) {

    map<long long,long long> freq;
    vector<long long> ans;
    
    for(auto it:a){
        freq[it]++;
    }
    
    int check = n/3;
    for(auto &[d,c]:freq){
        if(c>=check) ans.push_back(d);
    }
    
    return ans;
}

int main(){

    return 0;
}
