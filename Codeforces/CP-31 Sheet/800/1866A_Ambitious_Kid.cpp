/*1866A*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 1e9 + 7;

void solve() {
    int n,min_ans = INF,a;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a;
        min_ans = min(min_ans,abs(a));
    }
    cout << min_ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    while (T--) {
        solve();
    }

    return 0;
}
/*没啥想说的*/