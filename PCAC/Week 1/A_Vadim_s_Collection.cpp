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
    ll n = 10;
    string s;
    cin >> s;
    map<ll, ll> mp;
    each(x, s)
    {
        mp[x-'0']++;
    }

    vll ans;
    ll need = 9;
    rep(i, 0, n)
    {
        ll m = 9 - i;
        while (1)
        {
            if (mp[m])
            {
                ans.push_back(m);
                mp[m]--;
                break;
            }
            m++;
        }
    }

    each(x, ans)
    {
        cout << x;
    }
    cout << endl;
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