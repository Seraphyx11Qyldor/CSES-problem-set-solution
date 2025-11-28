#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.length();
    int start = 1;
    int result = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            start++;
        }
        else
        {
            start = 1;
        }
        result = max(result, start);
    }
    cout << result << "\n";
}
