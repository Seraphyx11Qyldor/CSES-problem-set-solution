#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll XOR_given = 0, XOR_total = 0;
    for (ll i = 1; i <= n; i++)
    {
        XOR_total ^= i;
    }
    for (ll i = 0; i < n - 1; i++)
    {
        long long x;
        cin >> x;
        XOR_given ^= x;
    }
    cout << (XOR_total ^ XOR_given) << "\n";
}