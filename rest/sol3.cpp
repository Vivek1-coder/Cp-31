#include <iostream>
#include<vector>
#include<map>
#include<climits>
using namespace std;

long long minTime(long long n,long long k,map<long long,long long>  &dp){
    if(n < k){
        return INT_MAX;
    }
    if(n == k){
        return 0;
    }

    if(dp.find(n) != dp.end()) return dp[n];
    long long left = minTime(n/2,k,dp);
    long long right = minTime((n+1)/2,k,dp);
    return dp[n] = min(left,right)+1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;

        map<long long,long long> dp;
        long long ans = minTime(n,k,dp);

        if(ans >= (long long)INT_MAX){
            cout<<-1<<endl;
        }
        else{
            cout<<dp[n]<<endl;
        }
    }
}