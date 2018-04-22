//
// Created by enheng on 18-4-18.
//

#include "P1090.h"

#include <iostream>
#include <set>
#include <queue>

using namespace std;

void P1090(){
    int n, tmp, ans = 0;
    multiset<int> fruit;
    priority_queue<int, vector<int>, greater<int>> q;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
//        fruit.insert(tmp);
        q.push(tmp);
    }

//    while(fruit.size() != 1){
//        auto it = fruit.begin();
//        auto f = it;
//        auto s = ++it;
//        tmp = *f + *s;
//        ans += tmp;
//
//        fruit.erase(f);
//        fruit.erase(s);
//        fruit.insert(tmp);
//    }

    while(q.size() != 1){
        auto f = q.top();
        q.pop();
        auto s = q.top();
        q.pop();

        tmp = f + s;
        q.push(tmp);

        ans += tmp;
    }


    cout << ans;
}