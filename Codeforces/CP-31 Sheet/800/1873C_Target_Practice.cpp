
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
    int ans = 0;
    vector<vector<int>> board(10,vector<int>(10,0));
    for(int score = 1;score <= 5;score++){
        int l = score - 1,r = 9 - l;
        for(int i = l;i <= r;i++){
            for(int j = l;j <= r;j++){
                board[i][j] = score;
            }
        }
    }
    vector<vector<char>>ch(10,vector<char>(10));
    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 10;j++){
            cin >> ch[i][j];
        }
    }
    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 10;j++){
            if(ch[i][j] == 'X'){
                ans += board[i][j];
            }
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
