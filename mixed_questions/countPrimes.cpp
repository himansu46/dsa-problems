#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int countPrime(int n){
    vector<bool>prime(n+1,true);
    int count=0;
    prime[0]=prime[1]=false;
    for(int i=2; i<n; i++){ 
        if(prime[i]){
            count++;
            for(int j=2*i; j<n; j+=i){
                prime[j]=0;
            }
        }
    }
    return count;
}

int main(){
    int a=3;
    int count=countPrime(a);
    cout<<count;
    return 0;
}