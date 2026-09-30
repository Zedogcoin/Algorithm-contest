/*1881A_Don_t_Try_to_Count*/
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
    int n,m,t = 0;
    string x,s,temp;
    cin >> n >> m >> x >> s;
    bool found = false;
    while(1){
            for(int i = 0;i <= int(x.size()) - int(s.size());i++){
                temp.clear();
                for(int l = 0;l < s.size();l++){
                    temp += x[i + l];
                }
                if(temp == s){
                    cout << t << endl;
                    found = true;
                    return;
                }
            }
            if(int(x.size()) > (n + m) && !found){
                cout << "-1" << endl;
                return;
            }
        x += x;
        t++;
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
/*没啥想说的
就字符串加暴力*/