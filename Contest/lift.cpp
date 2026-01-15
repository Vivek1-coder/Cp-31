#include<iostream>
#include<vector>

using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n,0);
        long long sum = 0;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        long long maxDiff = abs(arr[1]-arr[0]);
        for(long long i = 1;i<n-1;i++){
            long long diff = (abs(arr[i+1]-arr[i])+abs(arr[i]-arr[i-1])) - abs(arr[i+1]-arr[i-1]);
            sum += abs(arr[i]-arr[i-1]);
            if(maxDiff < diff){
                maxDiff = diff;
            }
        }
        sum += abs(arr[n-1]-arr[n-2]);
        
        if(abs(arr[n-1]-arr[n-2]) > maxDiff){
            maxDiff = abs(arr[n-1]-arr[n-2]);
        }
        if(maxDiff > 0){
            sum -= maxDiff;
        }
        cout<<sum<<endl;
    }
}