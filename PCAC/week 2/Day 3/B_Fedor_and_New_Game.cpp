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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, K;
    cin >> n >> m >> K;
    vll v(m);
    rep(i, 0, m)
    {
        cin >> v[i];
    }
    ll x;
    cin >> x;
    ll ans = 0;
    each(k, v)
    {
        ll d = k ^ x;
        ll dif = __builtin_popcount(d);
        if (dif <= K)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}