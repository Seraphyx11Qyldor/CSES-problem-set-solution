#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

ll power(ll base, ll expo)
{
    ll result = 1;
    while (expo)
    {
        if (expo & 1ll)
        {
            result = (result * base) % MOD;
        }

        base = (base * base) % MOD;
        expo >>= 1ll;
    }

    return result;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;

    cin >> n;

    cout << power(2, n) << "\n";
}
