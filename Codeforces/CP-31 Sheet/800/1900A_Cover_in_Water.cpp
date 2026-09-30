/*1900A Cover_in_water*/
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
    int n,sum = 0;
    string s;
    cin >> n >> s;
    for(int i = 0;i <= n - 3;i++){
        if(s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.'){
            cout << "2" << endl;
            return;
        }
    }
    for(char ch:s){
        if(ch == '.'){
            sum++;
        }
    }
    cout << sum << endl;
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
/*找到连续三格水就无敌了，可以补掉剩下的所有格子
找不到就只能老实全加起来*/