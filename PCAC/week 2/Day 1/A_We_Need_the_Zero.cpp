#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define INF 1e9
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repd(i, a, b) for (int i = a; i > b; --i)
#define each(x, a) for (auto &x : a)

void solve(void)
{
    ll n;
    cin >> n;
    vll v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    ll total_xor = 0;

    each(x, v)
    {
        total_xor = x ^ total_xor;
    }

    if (total_xor == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (n % 2 == 1)
        {
            cout << total_xor << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}