
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    ll n,ans = 0;
    cin >> n;
    vector <int> a(n + 1,0);
    vector <int> pos(2 * n + 1,0);
    for(int i = 1;i <= n;i++){
        cin >> a[i];
        pos[a[i]] = i;
    }
    sort(a.begin(),a.end());
    a.erase(a.begin());
    for(int x:a){
        for(int y:a){
           if(x == y){
            continue;
           }
           if(y > 2 * n / x){
            break;
           }
           if(x * y == pos[x] + pos[y]){
            ans++;
           }
        }
    }
    cout << ans / 2 << endl;
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
/*这里必须剪枝掉 因为是sort的当x * y > 2 * n时后面都不行了
枚举出现的数会比枚举下标好点
最后记得除以2
2026.10.1*/