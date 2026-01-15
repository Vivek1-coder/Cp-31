#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<map>
using namespace std;

int solve(int i,int k,bool set){
    if(k <= 0){
        return 0;
    }

    if(i == 0 && k >= 1){
        return 1;
    }

   

    //arr[i] = 1;
    int one = solve(i-1,k-2,true);

     //arr[i] = 0;
    if(set) k -= 1;
    int zero = solve(i-1,k,set);

    return one + zero;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        int msb = log2(n);
        int ans = solve(msb-1,k,false);
        if(msb+1 <= k){
            ans += 1;
        }

        int res = n-ans;
        cout<<ans<<" "<<res<<endl;
    }
}