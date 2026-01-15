#include<iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;

        vector<long long> arr(n,0);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }        

        long long maxi = arr[0]+x;
        long long mini = arr[0]-x;
        long long ans = 0;
        for(int i = 1;i<n;i++){
            long long currMax = arr[i]+x;
            long long currMin = arr[i] - x;
            if((currMin > maxi) || (currMax < mini)){
                maxi = currMax;
                mini = currMin;
                ans += 1;
            }
            else{
                mini = max(mini,currMin);
                maxi = min(maxi,currMax);
            }
        }
        cout<<ans<<endl;
    }
}