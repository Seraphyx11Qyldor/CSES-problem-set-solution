#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll coin_a, coin_b;
        cin >> coin_a >> coin_b;

        ll mx = max(coin_a, coin_b);
        ll mn = min(coin_a, coin_b);

        if ((coin_a + coin_b) % 3 == 0 && mx <= 2 * mn)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
