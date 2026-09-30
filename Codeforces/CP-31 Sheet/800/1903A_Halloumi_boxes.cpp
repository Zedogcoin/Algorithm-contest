/*1903A Halloumi_boxes */
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
    int n,k;
    cin >> n >> k;
    vector <int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    if((k >= 2) ||(k == 1 && is_sorted(a.begin(),a.end()))){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
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
/*只要k >= 2就可以开始冒泡排序
不行就只能指望这个数组原本是sorted*/