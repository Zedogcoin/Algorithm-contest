#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);

    cout << s.count(20) << endl;
    cout << s.count(100) << endl;
    /*判断x是否在s里面 20在输出1 100不在输出0 
    插入多个数字只会出现一个值*/
    s.erase(20);
    cout << s.count(20) << endl;
    /*擦去之后就是0*/
    for(int x:s){
        cout << x << " ";
    }
    /*遍历输出是无序的*/
    
}