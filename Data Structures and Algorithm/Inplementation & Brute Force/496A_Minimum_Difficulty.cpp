/*Codeforces 496A 900 points*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,max_ans,min_ans = 1e9;
    cin >> n;
    vector <int> a(n),diff(n - 1,0);
    cin >> a[0];
    for(int i = 1;i < n;i++){
        cin >> a[i];
        diff[i - 1] = a[i] - a[i - 1];
    }
    for(int i = 0;i < n - 2;i++){
        max_ans = 0;
        for(int j = 0;j < n - 1;j++){
            if(i == j){
                max_ans = max(diff[i] + diff[i + 1],max_ans);
            }
            else{
                max_ans = max(diff[j],max_ans);
            }
        }
        min_ans = min(max_ans,min_ans);
    }
    cout << min_ans << endl;
    return 0;
}
/*暴力枚举
先把每个的差算出来 再取每次变化的差的最大值 最后最大值中取最小值
人生第0题CF 梦开始的地方 2026.9.17*/