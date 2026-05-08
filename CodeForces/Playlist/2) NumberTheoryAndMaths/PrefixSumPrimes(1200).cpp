// Problem Link - https://codeforces.com/problemset/problem/1149/A

#include<bits/stdc++.h>
using namespace std;

void printOnes(int ones){
    for(int i=0;i<ones;i++){
        cout << "1 ";
    }
}

void printTwos(int twos){
    for(int i=0;i<twos;i++){
        cout << "2 ";
    }
}

int main(){
    int n;
    cin >> n;
    
    int ones=0,twos=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x==1) ones++;
        else twos++;
    }

    if(ones==0){
        printTwos(twos);
    }
    else if(twos==0){
        printOnes(ones);
    }
    else{ // The sequences of form - 2 1 22222.... 1111... gives highest no. of primes in prefix sum
        cout << "2 1 ";
        printTwos(twos-1);
        printOnes(ones-1);
    }
    return 0;
}