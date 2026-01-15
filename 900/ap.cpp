#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        bool isAp = false;

        if ((b - a) == (c - b))
        {
            isAp = true;
        }

        // multiply c
        // 11111110000011
        // 00000
        int diff = b-a;
        int req = b+diff;
        if((req > 0) && (req%c == 0)){
          isAp = true;
        }

        // multiply a
        diff = b-c;
        req = b+diff;
        if((req > 0) && (req%a == 0)){
            isAp = true;
        }

        // multiply b
        diff = c-a;
        if(diff%2 == 0){
            diff /= 2;
            req = a+diff;
            if((req > 0) && (req%b == 0)){
                isAp = true;
            }
        }

        if (isAp)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}