/*CF 1097B -1200*/
#include<bits/stdc++.h>
using namespace std;
int n,res,flag = 0;
vector <int> degree;
void dfs(int index,int res){
     if(index == n){
        if(res % 360 == 0){
            flag = 1;
        }
        return;
     }
     dfs(index + 1,res + degree[index]);
     dfs(index + 1,res - degree[index]);
}
int main(){
    cin >> n;
    degree.resize(n);
    for(int i = 0;i < n;i++){
        cin >> degree[i];
    }
    dfs(0,0);
    if(flag == 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}
/*比较简单的搜索
Mark一下 应该是可以dp的
2026.9.17*/