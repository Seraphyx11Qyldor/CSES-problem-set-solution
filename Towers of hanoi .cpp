#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void t_of_hanoi(int n, int main, int auxillary, int target, ll &move_count)
{

    if (n == 1)
    {
        cout << main << " " << target << "\n";
        move_count++;
        return;
    }

    t_of_hanoi(n - 1, main, target, auxillary, move_count);

    cout << main << " " << target << "\n";
    move_count++;

    t_of_hanoi(n - 1, auxillary, main, target, move_count);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ll total_moves = (1ll << n) - 1;

    cout << total_moves << "\n";

    t_of_hanoi(n, 1, 2, 3, total_moves = 0);
}
