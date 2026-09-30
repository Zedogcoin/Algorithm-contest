/*1899A Game with Integers*/
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
    if(n % 3 == 0){
        cout << "Second" << endl;
    }
    else{
        cout << "First" << endl;
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
/*如果余1或者2,直接就可以秒了对手
如果被3整除，就跟对方拖后期就行了。。*/