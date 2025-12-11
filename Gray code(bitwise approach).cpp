#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int total = 1 << n;
    for (int i = 0; i < total; i++)
    {

        int g = i ^ (i >> 1);

        for (int j = n - 1; j >= 0; j--)
        {
            cout << ((g >> j) & 1);
        }
        cout << "\n";
    }
}
