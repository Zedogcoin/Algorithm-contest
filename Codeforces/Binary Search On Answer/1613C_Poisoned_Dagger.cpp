/*CF 1613C C_Poisoned_Dagger 1200*/
#include<bits/stdc++.h>
using namespace std;
int t,n,h;
vector <int> a;
bool check(int mid,int n){
    int ans = mid,last = a[1] + mid - 1;
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
        int left = 1,right = h;
        while(left < right){
            int mid = left + (right - left) / 2;
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