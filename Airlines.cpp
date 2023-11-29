#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // Your code here
        int x, n;
        cin >> x >> n;
        if (n % 100 == 0)
        {
            if (x < (n / 100))
            {
                cout << (n / 100) - x << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
        else
        {
            if (x < (n / 100) + 1)
            {
                cout << ((n / 100) + 1) - x << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
    }
    return 0;
}
