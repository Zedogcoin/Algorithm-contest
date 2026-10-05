/*luogu P8649 K倍区间*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,x;
    ll ans = 0;
    unordered_map <ll,ll> mp;
    cin >> n >> k;
    vector <ll> pre(n + 1,0);
    mp[0]++;
    for(int i = 1;i <= n;i++){
        cin >> x;
        pre[i] = (pre[i - 1] + x) % k;
        mp[pre[i]]++;
    }
    for(auto &[key,value]:mp){
       ans += (value * (value - 1) / 2);
    }
    cout << ans << endl;
    return 0;
}
/*学了prefix sum做的一题,以前用暴力做的超时了
(a - b)是k的倍数= a和b对k同余
用哈希计数，也就是N选2
这题提醒我 要补一点组合数学和数论的知识了
过不了的时候先想想开long long没有
2026.10.5*/