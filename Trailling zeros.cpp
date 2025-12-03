#include <bits/stdc++.h>
using namespace std;


int trailling_zeros(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 5;
        count += n;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << trailling_zeros(n) << "\n";
}
