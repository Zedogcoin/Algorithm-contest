
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
    int n;
    cin >> n;
    vector <int> a(n),ans;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    ans.push_back(a[0]);
    for(int i = 1;i < n;i++){
        ans.push_back(min(a[i],a[i - 1]) - 1);
        ans.push_back(a[i]);
    }
    cout << int(ans.size()) << endl;
    for(int x:ans){
        cout << x << " ";
    }
    cout << endl;
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
