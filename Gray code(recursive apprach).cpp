#include <bits/stdc++.h>
using namespace std;

void gray(int n, vector<string> &bit)
{
    if (n == 1)
    {
        bit = {"0", "1"};
        return;
    }

    vector<string> prev;
    gray(n - 1, prev);

    for (auto &s : prev)
    {
        bit.push_back("0" + s);
    }

    for (int i = prev.size() - 1; i >= 0; i--)
    {

        bit.push_back("1" + prev[i]);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> result;
    gray(n, result);
    for (auto &s : result)
        cout << s << "\n";
}
