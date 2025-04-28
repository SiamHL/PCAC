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
    int N, M;
    cin >> N >> M;

    if (((N % 2 == 0) && (M % 2 == 1)) || (M < N))
    {
        cout << "NO\n";
    }
    else if ((N % 2) == 1)
    {
        cout << "YES\n";
        for (int i = 1; i < N; ++i)
        {
            cout << "1 ";
        }
        cout << M - N + 1 << '\n';
    }
    else
    {
        cout << "YES\n";
        for (int i = 2; i < N; ++i)
        {
            cout << "1 ";
        }
        cout << (M - N + 2) / 2 << ' ' << (M - N + 2) / 2 << '\n';
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