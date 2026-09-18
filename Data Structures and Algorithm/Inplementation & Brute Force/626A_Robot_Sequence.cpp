/*Codeforces 626A 1000*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    long long ans = 0,n = 0;
    cin >> n;
    cin.ignore();
    getline(cin,s);
    for(size_t start = 0;start < s.size() - 1;start++){
        long long x = 0,y = 0;
        for(int length = 1;length <= s.size() - start;length++){
            if(s[start + length - 1] == 'U'){
                x--;
            }
            else if(s[start + length - 1] == 'D'){
                x++;
            }
            else if(s[start + length - 1] == 'L'){
                y--;
            }
            else if(s[start + length - 1] == 'R'){
                y++;
            }
            if(x == 0 && y == 0){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
/*如果枚举起点再枚举终点再枚举这一段中的数字，时间复杂度就会是O(n^3)。
所以我们换个思路,先枚举起点再枚举长度,这样不用每次归0，每次就加在上一次算过的
例如URLLDR，我们就算U,UR,URL,URLL,URLLD,URLLDR...这样时间复杂度就会到O（n^2)
2026.9.17
*/
