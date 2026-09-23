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
    int n,k,ans = 0;
    string s;
    cin >> n >> k >> s;
    for(size_t i = 0;i < s.size();i += k){
        int flag = 0;
        for(int j = i;j < i + k;j++){
            if(s[j] == '0'){
                flag = 1;
            }
        }
        if(flag == 0){
            ans++;
        }
    }
    cout << ans << endl;
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