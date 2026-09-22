/*CF 1613C C_Poisoned_Dagger 1200*
二分答案FFFFFTTTTT 
毒素持续时间越长造成伤害越高,越短造成伤害越低，套板子1
这里重点讲下毒素持续时间的计算，一开始我想的是遍历所有时间，但是肯定超时
如果只遍历a[i],那么我们只需要看这次毒素实际贡献了几点伤害
如果是在上次毒素结束时间之后就是加上全部的mid,否则加上补上的实际伤害时间
最后看是否造成>=h的伤害就行了
*/
#include<bits/stdc++.h>
using namespace std;
long long t,n,h;
vector <int> a;
bool check(long long mid,long long n){
    long long ans = mid,last = a[1] + mid - 1;
    for(int i = 2;i <= n;i++){
        if(a[i] > last){
            ans += mid;
        }
        else{
            ans += mid - (last - a[i] + 1);
        }
        last = a[i] + mid - 1;
    }
    return ans >= h;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    for(int i = 0;i < t;i++){
        cin >> n >> h;
        a.resize(n + 1);
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        long long left = 1,right = h;
        while(left < right){
            long long mid = left + (right - left) / 2;
            if(check(mid,n)){
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }
        cout << left << endl;
    }
    return 0;
}