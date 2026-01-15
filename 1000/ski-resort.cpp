#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,k,q;
        cin>>n>>k>>q;

        vector<long long> arr(n,0);

        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        long long curr = 0;
        long long ans = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] <= q){
                curr += 1;
            }
            else{
                if(curr >= k){
                    ans += ((curr)*(curr+1)/2) - (k*(k-1)/2) - (curr-k+1)*(k-1);
                }
                curr = 0;
            }
        }
        if(curr >= k){
                    ans += ((curr)*(curr+1)/2) - (k*(k-1)/2) - (curr-k+1)*(k-1);
                }
        cout<<ans<<endl;
    }
}