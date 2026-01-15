#include <iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int msb = log2(n-1);
        // cout<<msb<<endl;
        int ans = (1<<msb);
        vector<int> res;
        for(int i = ans-1;i>=0;i--){
            res.push_back(i);
        }
        for(int i = ans;i<n;i++){
            res.push_back(i);
        }
        for(int i = 0;i<n;i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}