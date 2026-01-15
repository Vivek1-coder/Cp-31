#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // cout << 1 << endl;
        string st, target;

        cin >> st;
        cin >> target;
       
        int n = st.size();
        int m = target.size();

        if (m > n)
        {
            cout << "NO" << endl;
            continue;
        }

        int j = m - 1;
        int i = n - 1;
        unordered_map<char, bool> seen;
        bool isPossible = true;
        while (i >= 0 && j >= 0)
        {
            if (st[i] == target[j])
            {
                if (seen[st[i]])
                {
                    isPossible = false;
                    break;
                }
                i -= 1;
                j -= 1;
            }
            else
            {
                seen[st[i]] = true;
                i -= 1;
            }
        }

        if (isPossible && (j < 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}