#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        
        int each = r/(b+1);
        int rem = r%(b+1);

        string ans = "";
        int temp = each;
        for(int i = 0;i<n;){
            if(temp > 0){
                ans += 'R';
                temp--;
            }
            else{
                if(rem > 0){
                    ans += 'R';
                    rem--;
                    i++;
                }
                ans += 'B';
                temp = each;
            }
            i++;
        }
        cout<<ans<<endl;
    }
}