/*数字三角形*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 1e9 + 7;
int r,max_ans = 0;
int nums[1010][1010];
void dfs(int sum,int row,int col){
    if(row == r){
        max_ans = max(max_ans,sum);
        return;
    }
    dfs(sum + nums[row][col + 1],row + 1,col);
    dfs(sum + nums[row + 1][col + 1],row + 1,col + 1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> r;
    for(int i = 0;i < r;i++){
        for(int j = 0;j <= i;j++){
            cin >> nums[i][j];
        }
    }
    dfs(nums[0][0],0,0);
    cout << max_ans << endl;
    return 0;
}
