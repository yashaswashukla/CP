/*
Question Link:
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    bool PowerUsed = false;
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    int size = 0, ans = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            size++;
        else if (s[i] == '1' && !PowerUsed)
        {
            PowerUsed = 1;
            j = i;
            size++;
        }
        else
        {
            ans = max(size, ans);
            PowerUsed = false;
            i = j;
            size = 0;
        }
        ans = max(size, ans);
    }
    cout << ans / x << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}