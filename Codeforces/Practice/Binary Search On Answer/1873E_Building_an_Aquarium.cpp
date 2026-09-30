/*1873E_Building_an_Aquarium.cpp 1100*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll t,n,x;
vector <ll> a;
bool check(ll mid){
    ll ans = 0;
    for(int i = 0;i < n;i++){
        if(mid > a[i]){
           ans += mid - a[i];
        }
        if(ans > x){
            return false;
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    for(int i = 0;i < t;i++){
        cin >> n >> x;
        a.resize(n);
        for(int j = 0;j < n;j++){
            cin >> a[j];
        }
        ll left = 1,right = *max_element(a.begin(),a.end()) + x;
        while(left < right){
            ll mid = left + (right - left + 1)/2;
            if(check(mid)){
                left = mid;
            }
            else{
                right = mid - 1;
            }
        }
        cout << left << endl;
    }
}
/*这里要套最大值的板子 right的上界要覆盖到全部可能
check函数里面 一旦超过就立刻返回false 这样不会整数溢出*/