#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (ll k = 1; k <= n; k++)
    {

        ll t_cells = k * k;

        ll t_pairs = t_cells * (t_cells - 1) / 2;

        ll attacking_ways = 0;

        if (k >= 3)
        {
            attacking_ways = 4 * (k - 1) * (k - 2);
        }
        ll result = t_pairs - attacking_ways;
        cout << result << "\n";
    }
}
