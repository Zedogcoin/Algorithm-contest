/*431B Shower_Line 1200*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector <int> nums = {0,1,2,3,4};
    ll max_ans = 0;
    int g[5][5];
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            cin >> g[i][j];
        }
    }
    do{
        ll ans = 0;
        for(int i = -1;i <= 2;i++){
            for(int j = i + 1;j <= 3;j += 2){
                ans = ans + g[nums[j]][nums[j + 1]] + g[nums[j + 1]][nums[j]];
            }
        }
        max_ans = max(max_ans,ans);
    }while(next_permutation(nums.begin(),nums.end()));
    cout << max_ans << endl;
    return 0;
}
/*学了下全排列next_permutation
2026.10.1*/