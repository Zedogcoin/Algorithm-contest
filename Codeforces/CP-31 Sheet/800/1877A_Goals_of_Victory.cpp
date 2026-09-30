/*1877A*/

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
    int n,a,sum = 0;
    cin >> n;
    for(int i = 0;i < n - 1;i++){
        cin >> a;
        sum += a;
    }
    cout << -sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
/*What can I say
其实全部的效率和是0
所以就是已知和的负数*/