/*1901A Line Trip*/
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
    int n,x,a,max_ans = 0,ans = 0;
    cin >> n >> x;
    vector <int> line(2 * x + 1,0);
    for(int i = 0;i < n;i++){
        cin >> a;
        line[a] = 1;
        line[2 * x - a] = 1;
    }
    for(int i = 1;i < 2 * x + 1;i++){
        ans++;
        max_ans = max(ans,max_ans);
        if(line[i] == 1){
            ans = 0;
        }
    }
    cout << max_ans << endl;
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
/*我想的是把来往的路接起来，标记加油站，最小的加油量就是行走段中的最大值，一到加油站就重置为0*/