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
    string s;
    cin >> s;
    ll missmatch = 0;
    ll l = 0, r = n - 1;

    rep(i, 0, n / 2)
    {
        missmatch += (s[i] != s[n - 1 - i]);
    }
    // cout << missmatch << endl;

    string ans = "";
    rep(i, 0, missmatch)
    {
        ans += "0";
    }

    if (n % 2 != 0)
    {
        rep(i, missmatch, n - missmatch+1)
        {
            ans += "1";
        }
    }
    else
    {
        ll flag = 0;
        rep(i, missmatch, n - missmatch+1)
        {
            ans += flag % 2 == 0 ? "1" : "0";
            flag++;
        }
    }

    rep(i, n - missmatch, n)
    {
        ans += "0";
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