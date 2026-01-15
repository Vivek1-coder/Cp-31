#include <iostream>
#include<vector>
using namespace std;

int main(){
 int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (n < k) {
            cout << -1 << '\n';
            continue;
        }

        long long steps = 0;
        while (n > k) {
            n = (n + 1) / 2;
            steps++;
        }

        cout << steps << '\n';
    }
}