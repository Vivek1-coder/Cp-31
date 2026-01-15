#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n,0);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());
        long long mini = arr[0];
        int i = 1;
        while((i< n-1) && (arr[i] == arr[0])){
            i += 1;
        }

        long long maxi = arr[i];
        mini = max(mini,maxi-mini);
        cout<<mini<<endl;
    }
}