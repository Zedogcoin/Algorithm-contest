
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
    vector <int> a(n + 1);
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    if(a[1] == 1){
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
/*感觉智商被羞辱了。。
只要第一个排好后面就冒泡排序山峰向右移动
否则永远无法把1挪到第一位 因为1不会成为山峰 只能被往后移动*/