#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        string b;
        cin>>a>>b;
        int n = a.size();
        int m = b.size();
        int ans = 0;
        vector<vector<int>> dp(n+1,vector<int> (m+1,0));
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(a[i-1] == b[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                ans = max(ans,dp[i][j]);
            }
        }
        int res = n + m - 2*ans;
        cout<<res<<endl;
    }
}