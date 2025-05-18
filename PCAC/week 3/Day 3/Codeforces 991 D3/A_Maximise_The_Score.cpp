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
    priority_queue<ll> pq;
    rep(i, 0, 2*n)
    {
        ll x;
        cin >> x;
        pq.push(x);
    }
    ll ans = 0;
    while (!pq.empty())
    {
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();
        ans += min(a, b);
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