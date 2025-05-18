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
    ll N = 100000 + 2;
    ll n, k;
    cin >> n >> k;
    map<ll, ll> v;
    rep(i, 0, n)
    {
        ll x;
        cin >> x;
        v[x]++;
    }
    vll shit;
    each(x, v)
    {
        shit.push_back(x.second);
    }
    sort(shit.begin(), shit.end());
    ll I = shit.size();
    rep(i, 0, shit.size())
    {
        if (shit[i] > k)
        {
            break;
        }
        k -= shit[i];
        I--;
    }
    if (I == 0)
        I = 1;
    cout << I << endl;
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