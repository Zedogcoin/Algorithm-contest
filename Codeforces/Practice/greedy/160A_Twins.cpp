/*CF160A Twins 900*/
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
    int n,sum = 0,ans = 0;
    cin >> n;
    vector <int> coin(n);
    for(int i = 0;i < n;i++){
        cin >> coin[i];
        sum += coin[i];
    }
    sort(coin.begin(),coin.end(),greater<int>());
    for(int i = 0;i < n;i++){
        ans += coin[i];
        if(ans > sum / 2){
            cout << i + 1 << endl;
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}