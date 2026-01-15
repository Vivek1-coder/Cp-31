#include <iostream>
#include <climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int ans = 0;

        for(int i = 0;i<n-1;i++){
            ans = max(ans,arr[i]-arr[i+1]);
            ans = max(ans,arr[i]-arr[0]);
            ans = max(ans,arr[n-1]-arr[i]);
        }
        ans = max(ans,arr[n-1]-arr[0]);
        cout<<ans<<endl;
    }
}