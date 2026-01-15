#include <iostream>
#include <vector>
#include <algorithm>   // for __gcd

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool first = true;
        int ans = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] != i + 1){
                int diff = abs(arr[i] - (i + 1));
                if(first){
                    ans = diff;
                    first = false;
                } else {
                    ans = __gcd(ans, diff);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
