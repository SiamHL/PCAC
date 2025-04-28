#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> cnt;  // map to store the frequency of bets on each day
    bool ok = false;

    // Count how many bets are on each day
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        cnt[a]++;  // increment the count for the corresponding day
        if (cnt[a] >= 4) {
            ok = true;  // if any day has 4 or more bets, we can guarantee success
        }
    }

    // Output "Yes" if there's a day with 4 or more bets, else "No"
    cout << (ok ? "Yes" : "No") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
