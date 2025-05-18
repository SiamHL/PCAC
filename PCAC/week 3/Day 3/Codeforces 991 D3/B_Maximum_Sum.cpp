#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define INF 1e9
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define repd(i, a, b) for (ll i = a; i > b; --i)
#define each(x, a) for (auto &x : a)

void solve(void)
{
    ll n, k;
    cin >> n >> k;
    deque<ll> dq;
    vll v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    vll pr(n + 1, 0);
    rep(i, 0, n)
    {
        pr[i + 1] = pr[i] + v[i];
    }

    ll ans = 0;

    rep(i, 0, k + 1)
    {
        ans = max(ans, pr[n - (k - i)] - pr[i * 2]);
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