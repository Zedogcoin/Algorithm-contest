
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 1e9 + 7;
void solve(){
    unordered_map <int,int> mp;
    int n,a,index = 0;
    cin >> n;
    vector <int> ans;
    for(int i = 0;i < n;i++){
        cin >> a;
        mp[a]++;
    }
    if(mp.size() == 1){
        cout << "YES" << endl;
        return;
    }
    if(mp.size() != 2){
        cout << "NO" << endl;
        return;
    }
    else{
        for(auto&[key,value]:mp){
            ans.push_back(value);
        }
        if((n % 2 == 0 && ans[0] == ans[1]) || (n % 2 == 1 && abs(ans[0] - ans[1]) == 1)){
           cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
/*没啥好说的
巩固了一下hash*/