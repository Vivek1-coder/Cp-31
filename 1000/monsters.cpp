#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

struct cmp{
    public : 
        bool operator()(pair<long long,long long> a,pair<long long,long long> b){
            if(a.first == b.first) return a.second > b.second;
            return a.first < b.first;
        }
};
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n,0);
        for(long long i = 0;i<n;i++){
            cin>>a[i];
        }
        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,cmp> pq;
        for(long long i = 0;i<n;i++){
            if(a[i]%k != 0){
                pq.push({a[i]%k,i});
            }
            else{
                pq.push({k,i});
            }
        }
        vector<long long> ans;
        while(!pq.empty()){
            long long ele = pq.top().first;
            long long idx = pq.top().second;
            pq.pop();
            ans.push_back(idx+1);
            
        }

        for(long long i = 0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}