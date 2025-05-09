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
    deque<ll> dq;
    for (ll i = 0; i <= __lg(n); i++)
    {
        if ((n >> i) & 1)
        {
            if (n - (1ll << i) > 0)
            {
                dq.push_front(n - (1 << i));
            }
        }
    }

    dq.push_back(n);

    cout << dq.size() << endl;

    each(x, dq)
    {
        cout << x << " ";
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