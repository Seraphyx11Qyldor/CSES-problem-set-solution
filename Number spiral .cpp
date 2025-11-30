#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        ll y, x;
        cin >> y >> x; 

        ll result;

        if (y >= x) {
            if (y % 2 == 1) {
                result = (y - 1) * (y - 1) + x;
            } else {
                result = y * y - x + 1;
            }
        } else {
            if (x % 2 == 0) {
                result = (x - 1) * (x - 1) + y;
            } else {
                result = x * x - y + 1;
            }
        }

        cout << result << "\n";
    }

    return 0;
}
