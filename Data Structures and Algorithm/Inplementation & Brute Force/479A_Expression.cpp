/*CF479A -1000*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,max_ans = 0;
    vector <int> ans(6);
    cin >> a >> b >> c;
    ans[0] = a + b + c;
    ans[1] = (a + b) * c;
    ans[2] = a * b + c;
    ans[3] = a * b * c;
    ans[4] = a + b * c;
    ans[5] = a * (b + c);
    for(int x:ans){
        max_ans = max(max_ans,x);
    }
    cout << max_ans << endl;
    return 0;
}
/*没啥好说的 全部组合可能列出来就行了 数字不是很大
2026.9.17
*/