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
int r;
int nums[1010][1010],memo[1010][1010];
int dfs(int row,int col){
   if(row == r - 1){
    return nums[row][col];
   }
   if(memo[row][col] != -1){
    return memo[row][col];
   }
   int left = dfs(row + 1,col);
   int right = dfs(row + 1,col + 1);
   memo[row][col] = nums[row][col] + max(left,right);
   return memo[row][col];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> r;
    memset(memo,-1,sizeof(memo));
    for(int i = 0;i < r;i++){
        for(int j = 0;j <= i;j++){
            cin >> nums[i][j];
        }
    }
    cout << dfs(0,0) << endl;
    return 0;
}
