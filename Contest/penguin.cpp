#include<iostream>
#include<vector>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int last = (1<<n);
        vector<bool> bitFlag(last,false);
        vector<int> ans;
        vector<vector<int>> mp(n+1);
        //  cout<<"1 st"<<endl;
        for(int i = 1;i<last;i++){
            int mask = 1;
            int cnt = 0;
            while(i&mask){
                cnt += 1;
                mask = (mask<<1);
            }
            // cout<<cnt<<" "<<i<<endl;
            mp[cnt].push_back(i);
        }
        // cout<<"1"<<endl;

        for(int i = n;i>0;i--){
            int sz = mp[i].size();
            for(int j = 0;j<sz;j++){
                ans.push_back(mp[i][j]);
                bitFlag[mp[i][j]] = true;
            }
        }
        //  cout<<"1"<<endl;

        for(int i = 0;i<last;i++){
            if(!bitFlag[i]){
                ans.push_back(i);
            }
        }
        //  cout<<"1"<<endl;

        for(int i = 0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}