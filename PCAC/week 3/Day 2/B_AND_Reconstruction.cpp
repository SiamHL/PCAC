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
    vll b(n - 1);
    rep(i, 0, n - 1)
    {
        cin >> b[i];
    }

    vll a(n);
    a[0] = b[0];

    rep(i, 1, n - 1)
    {
        a[i] = b[i] | b[i - 1];
    }
    a[n - 1] = b[n - 2];

    bool ok = true;

    rep(i, 0, n - 1)
    {
        if (b[i] != (a[i] & a[i + 1]))
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        each(x, a)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    else
        cout << -1 << endl;
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
