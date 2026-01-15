#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n, d;
    cin >> n >> d;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    long long st = 0;
    long long end = n - 1;
    long long ans = 0;
    while (st <= end)
    {
        long long curr = arr[end];
        long long req = (d / curr) + 1;
        if((end-st+1) >= req){
            ans += 1;
        }
        st += (req - 1);        
        end--;
    }
    cout<<ans<<endl;
}
