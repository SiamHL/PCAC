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
        ll x;
        cin >> v[i];
        
    }
    ll f = abs(v[0]);
    ll s = 0;
    rep(i, 1, n)
    {
        if (abs(v[i])<f)
        {
            s++;
        }
    }
    if (s > n / 2)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
    // cout << s << endl;
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