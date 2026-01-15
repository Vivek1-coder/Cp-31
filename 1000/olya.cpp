#include <iostream>
#include <vector>
#include <climits>
using namespace std;

pair<int,int> findMin(vector<vector<int>> &arr,int i){
    int n = arr[i].size();
    int mini = INT_MAX;
    int secMin = INT_MAX;
    for(int j = 0;j<n;j++){
        if(arr[i][j] < mini){
            secMin = mini;
            mini = arr[i][j];
        }
        else if(arr[i][j] <= secMin){
            secMin = arr[i][j];
        }
    }
    return {mini,secMin};
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        

        for(int i = 0;i<n;i++){
            int m;
            cin>>m;
            for(int j = 0;j<m;j++){
                int curr;
                cin>>curr;
                arr[i].push_back(curr);
            }
        }

        long long ans = 0;
        int miniF = INT_MAX;
        int miniS = INT_MAX;
        for(int i = 0;i<n;i++){
            pair<int,int> curr = findMin(arr,i);
            ans += (long long)curr.second;
            miniF= min(miniF,curr.first);
            miniS = min(miniS,curr.second);
        }

        ans -= miniS;
        ans += miniF;

        cout<<ans<<endl;
    }
}