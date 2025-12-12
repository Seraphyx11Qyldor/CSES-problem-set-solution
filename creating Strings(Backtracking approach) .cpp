#include <bits/stdc++.h>
using namespace std;

void backtracking(string &s, vector<bool> &used, string &current, vector<string> &result)
{

    if (current.size() == s.size())
    {
        result.push_back(current);
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (used[i])
            continue;
        if (i > 0 && s[i] == s[i - 1] && !used[i - 1])
            continue;

        used[i] = true;
        current.push_back(s[i]);

        backtracking(s, used, current, result);

        current.pop_back();
        used[i] = false;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    sort(s.begin(), s.end());
    vector<bool> used(s.size(), false);
    vector<string> result;
    string current = "";

    backtracking(s, used, current, result);

    cout << result.size() << "\n";
    for (auto &str : result)
    {
        cout << str << "\n";
    }
}
