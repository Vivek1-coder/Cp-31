#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;

        long long low = 0, high = 2e9;
        while (low < high) {
            long long mid = (low + high + 1) / 2;
            if (mid * (mid + 1) / 2 <= m)
                low = mid;
            else
                high = mid - 1;
        }

        long long D = low;
        long long left = min(D, k - 1);
        long long right = min(D, n - k);

        cout << 1 + left + right << "\n";
    }
    return 0;
}
