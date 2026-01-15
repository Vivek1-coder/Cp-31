#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> mp(26,0);
        long long distinct = 0;
        for(int i = 0;i<n;i++){
            if(mp[s[i] - 'a'] == 0) distinct += 1;
            mp[s[i]-'a'] += 1;
        }

        long long ans = distinct;
        long long left = 0;
        vector<int> mp2(26,0);
        for(int i = 0;i<n;i++){
            if(mp2[s[i] - 'a'] == 0) left += 1;
            mp2[s[i]-'a'] = 1;

            mp[s[i]-'a'] -= 1;
            // cout<<mp[s[i]-'a']<<" ";
            if(mp[s[i]-'a'] == 0){
                // cout<<"HII"<<
                distinct -= 1;
            }

            ans = max(ans,left+distinct);
            // cout<<s[i]<<" "<<left<<" "<<distinct<<" "<<ans<<endl;
        }
        cout<<ans<<endl;

    }
}