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
    ll sum_e = 0;
    ll sum_o = 0;
    rep(i, 1, n + 1)
    {
        ll x;
        cin >> x;
        if (i & 1)
            sum_o += x;
        else
            sum_e += x;
    }
    ll e = n / 2;
    ll o = n - (n / 2);

    if (sum_e % e != 0 || sum_o % o != 0)
    {
        cout << "NO" << endl;
        return;
    }
    if (sum_e / e != sum_o / o)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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