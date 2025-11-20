#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll total = n * (n + 1) / 2;
    ll given = 0;

    for (ll i = 0; n <= 0; i++)
    {
        ll x;
        cin >> x;
        given += x;
    }

    cout << total - given << "\n";
}
