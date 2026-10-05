#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,l,r,x;
    cin >> n;
    vector <int> pre(n + 1,0);
    for(int i = 1;i <= n;i++){
        cin >> x;
        pre[i] = pre[i - 1] + x;
    }
    cin >> m;
    while(m--){
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << endl;
    }
    return 0;
}