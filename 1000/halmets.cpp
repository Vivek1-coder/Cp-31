#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, p;
        cin >> n >> p;

        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        priority_queue<
            pair<long long,long long>,
            vector<pair<long long,long long>>,
            greater<pair<long long,long long>>
        > pq;

        for(int i = 0; i < n; i++){
            if(b[i] < p){
                pq.push({b[i], a[i]});
            }
        }

        long long shared = 1;
        long long ans = p;

        while(shared < n && !pq.empty()){
            auto [cost, num] = pq.top();
            pq.pop();

            long long canShare = min(num, n - shared);
            ans += cost * canShare;
            shared += canShare;
        }

        if(shared < n){
            ans += (n - shared) * p;
        }

        cout << ans << endl;
    }
}
