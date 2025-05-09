#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define INF 1e9
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repd(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
const ll B = 30;

void solve(void)
{
    ll n, k;
    cin >> n >> k;
    vll v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }

    vll bits(B + 1);

    for (ll i = 0; i < n; i++)
    {
        for (ll j = B; j >= 0; j--)
        {
            if ((v[i] >> j) & 1)
            {
                bits[j]++;
            }
        }
    }

    ll ans = 0;

    repd(i, B, 0)
    {
        if (bits[i] == n)
        {
            ans += (1ll << i);
        }
        else
        {
            if (n - bits[i] <= k)
            {
                ans += (1ll << i);
                k -= (n - bits[i]);
            }
        }
    }

    cout << ans << endl;
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