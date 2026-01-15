#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n,0);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        int ans = INT_MAX;
        int even = 0;
        for(int i = 0;i<n;i++){
            if(arr[i]%k == 0){
                ans = 0;
                break;
            }
            if(arr[i]%2 == 0){
                even++;
            }

            ans = min(ans,(k - (arr[i]%k))%k);
        }
        if(k == 4){
            if(even >= 2){
                ans = 0;
            }
            else if(even == 1){
                ans = min(1,ans);
            }
            else{
                ans = min(2,ans);
            }
        }
        cout<<ans<<endl;
    }
}