/*
Question Link:
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << x * (z - y) << endl;
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