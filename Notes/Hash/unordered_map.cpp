#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map <int,int> mp;
    mp[5] = 100;
    mp[8] = 200;
    cout << mp[5] << endl;//输出对应的值
    cout << mp[10] << endl;//没出现过 就是0
    for(auto [key,value]:mp){
       cout << key << "->" << value << endl;
    }
    //顺序不保证
    cout << mp.count(5) << endl;//输出1
    cout << mp.count(30) << endl;//输出0
    mp.erase(5);
    cout << mp.count(5) << endl;//输出0
    return 0;
}