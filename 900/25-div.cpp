#include <iostream>
#include <climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        int n = st.size();

        int lz = 0;
        while((lz < n) && (st[lz] == '0')){
            lz++;
        }
        
        int opr = 0;
        int ans = INT_MAX;
        bool fiveFound = false;
        for(int i = n-1;i>=lz;i--){
            if(st[i] == '5' && !fiveFound){
                fiveFound = true;
                continue;
            }
            if(((st[i] == '2') || (st[i] == '7')) && fiveFound){
                break;
            }
            opr++;
        }

        ans = min(ans,opr);
        opr = 0;

        bool zeroFound = false;
        for(int i = n-1;i>=lz;i--){
            if(st[i] == '0' && !zeroFound){
                zeroFound = true;
                continue;
            }
            if(((st[i] == '0') || (st[i] == '5')) && zeroFound){
                break;
            }
            opr++;
        }
        ans = min(ans,opr);
        cout<<ans<<endl;
    }
}