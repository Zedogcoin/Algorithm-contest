
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    vector <int> ans;
    cin >> n;
    string num = to_string(n);
    for(int i = n - int(num.size()) * 9;i < n;i++){
        int current = i;
        string str = to_string(i);
        for(char ch:str){
        current += (ch - '0');
        }
        if(current == n){
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    sort(ans.begin(),ans.end());
    for(int x:ans){
        cout << x << endl;
    }
    return 0;
}
