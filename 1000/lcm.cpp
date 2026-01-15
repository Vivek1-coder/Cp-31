#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans = n-1;
        for(long long st = 2;st*st <= n;st += 1){
            // cout<<st<<" "<<n<<" ";
            if((n-st)%st == 0){
                ans = min(ans,n-st);
            }

            long long r = n/st;
            long long end = min(r,n-r);
            if((n-end)%end == 0){
                ans = min(ans,n-end);
            }
        }
        cout<<n-ans<<" "<<ans<<endl;
    }
}