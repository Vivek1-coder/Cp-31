#include <iostream>
#include <vector>
#include <algorithm>   // for __gcd

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >>q;

        vector<long long> arr(n,0);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            if(i > 0){
                arr[i] += arr[i-1];
            }
        }

        vector<string> ans;
        for(int i = 0;i<q;i++){
            int l,r,k;
            cin>>l>>r>>k;
            l -= 1;
            r -= 1;
            long long prev = 0;
            if(l > 0)
                 prev = arr[l-1];
            long long curr = (k*(r-l+1));
            long long nxt = (arr[n-1] - arr[r]);
            
            if((prev+curr+nxt)%2 == 0){
                ans.push_back("NO");
            }
            else{
                ans.push_back("YES");
            } 
        }
        for(string st:ans){
            cout<<st<<endl;
        }
    }
    return 0;
}
