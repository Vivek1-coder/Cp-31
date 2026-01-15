#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        long long req = k*b;
        if(req > s){
            cout<<-1<<endl;
            continue;
        }
        long long left = s-req;
        long long share = left/n;
        long long rem = left%n;
        if(share >= k){
            cout<<-1<<endl;
            continue;
        }
        if((share == k-1) && rem != 0){
            cout<<-1<<endl;
            continue;
        } 

        vector<long long> ans(n,share);
        ans[0] = req+share;
        for(int i = 0;i<rem;i++){
            ans[i] += 1;
        }
        
        for(int i = 0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}