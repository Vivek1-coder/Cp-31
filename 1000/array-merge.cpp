#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    unsigned long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<unsigned long long> a(n,0);
        vector<unsigned long long> b(n,0);
        unsigned long long ans = 0;
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        for(int i = 0;i<n;i++){
            cin>>b[i];
        }

        vector<unsigned long long> mp(2*n+1,0);
        unsigned long long curr = 1;
        for(int i = 1;i<n;i++){
            if(a[i] == a[i-1]){
                curr += 1;
            }
            else{
                mp[a[i-1]] = max(mp[a[i-1]],curr);
                ans = max(ans,mp[a[i-1]]);
                curr = 1;
            }
        }

        mp[a[n-1]] =  max(mp[a[n-1]],curr);
        ans = max(ans,mp[a[n-1]]);

        curr = 1;
        
        for(int i = 1;i<n;i++){
            if(b[i] == b[i-1]){
                curr += 1;
            }
            else{
                ans = max(ans,mp[b[i-1]]+curr);
                curr = 1;
            }
        }

        ans = max(ans,mp[b[n-1]]+curr);

        cout<<ans<<endl;
    }

}