#include <iostream>
#include<string>
#include<climits>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans = INT_MAX;
        int curr = 0;
        int st = 0;
        for(int i = 0;i<n;i++){
            if(i<k){
                if(s[i] == 'B'){
                    curr += 1;
                }
            }
            else{
                ans = min(ans,k-curr);
                if(s[i] == 'B'){
                    curr += 1;
                }
                if(s[st] == 'B'){
                    curr-= 1;
                }
                st +=1 ;
            }
        }
        ans = min(ans,k-curr);
        cout<<ans<<endl;
    }
}