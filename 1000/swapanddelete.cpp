#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n = s.size();
        int one = 0;
        int zero = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '1'){
                one += 1;
            }
            else{
                zero += 1;
            }
        }

        int ans = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '0'){
                one -= 1;
                if(one < 0){
                    ans = n-i;
                    break;
                }
            }
            if(s[i] == '1'){
                zero -= 1;
                if(zero < 0){
                    ans = n-i;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}