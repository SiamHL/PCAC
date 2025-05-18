#include <bits/stdc++.h>
#include <algorithm>
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

void solve()
{
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    if (sum % 9 == 0)
        cout << "YES" << endl;
    else
    {
        int cnt = 0;
        int f = 0;
        int two = 0, three = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '2')
            {
                two++;
            }
            else if (s[i] == '3')
                three++;
        }
        two = min(two, 8);
        three = min(three, 8);
        if (two == 0)
        {
            for (int i = 1; i <= three; i++)
            {
                sum += 6;
                if (sum % 9 == 0)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
            return;
        }
        for (int i = 0; i <= two; i++)
        {
            for (int j = 0; j <= three; j++)
            {
                if ((sum + (2 * i) + (6 * j)) % 9 == 0)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
        if ((sum + (2 * two) + (three * 6)) % 9 == 0)
        {
            cout << "YES" << endl;
            return;
        }
        cout << "NO" << endl;
        return;
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