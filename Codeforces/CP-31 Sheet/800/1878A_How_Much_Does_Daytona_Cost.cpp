/*1878A*/
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
    unordered_set <int> s;
    int n,k,a;
    cin >> n >> k;
    for(int i = 0;i < n;i++){
        cin >> a;
        s.insert(a);
    }
    if(s.count(k)){
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
/*实质上只要取最短子段就行了
就是判断这个数有没出现过
重新用了一下hash*/