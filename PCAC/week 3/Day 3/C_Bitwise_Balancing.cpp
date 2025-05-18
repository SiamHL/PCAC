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

    ll a = 0, b, c, d, pos = 1, bit_b, bit_c, bit_d, mask = 1;
    cin >> b >> c >> d;
    for (ll i = 0; i < 62; i++)
    {
        if (b & mask)
            bit_b = 1;
        else
            bit_b = 0;
        if (c & mask)
            bit_c = 1;
        else
            bit_c = 0;
        if (d & mask)
            bit_d = 1;
        else
            bit_d = 0;
        if ((bit_b && (!bit_c) && (!bit_d)) || ((!bit_b) && bit_c && bit_d))
        {
            pos = 0;
            break;
        }
        if (bit_b && bit_c)
        {
            a += (1ll - bit_d) * mask;
        }
        else
        {
            a += bit_d * mask;
        }
        mask <<= 1;
    }
    if (pos)
    {
        cout << a << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
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