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
    string s;
    string ans;
    cin >> s;
    ll n = s.size();
    rep(i, 0, n)
    {
        ll d;
        d = min(i + 10, n);
        ll c = s[i] - '0';
        ll pos = i;
        rep(j, i, d)
        {
            ll now = s[j] - '0';

            if ((now - (j - i)) > c)
            {
                pos = j;
                c = now - (j - i);
            }
        }
        while (pos > i)
        {
            swap(s[pos - 1], s[pos]);
            pos--;
        }
        ans.push_back(char(c + '0'));
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