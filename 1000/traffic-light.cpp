#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        
        int idx = -1;
        long long ans = 0;
        for(int i = n-1;i>=0;i--){
            if(s[i] == 'g'){
                idx = i;
            }
            if(s[i] == c && idx != -1){
                ans = max(ans,(long long)(idx-i));
            }
        }
        for(int i = n-1;i>=0;i--){
            if(s[i] == 'g') break;
            if(s[i] == c){
                ans = max(ans,(long long)(n+idx-i));
            }
        }

        cout<<ans<<endl;
    }
}