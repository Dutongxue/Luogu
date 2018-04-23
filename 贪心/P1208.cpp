//
// Created by enheng on 18-4-23.
//

#include "P1208.h"

#include <iostream>
#include <map>
#include <algorithm>
//#include <bits/stdc++.h>

using namespace std;

void P1208(){
    int n, m, p, a, ans = 0;
    multimap<int, int> milk;

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> p >> a;
        milk.insert({p, a});
    }

    for(auto x:milk){
        if(x.second > n){
            ans += x.first * n;
            break;
        }else{
            ans += x.first * x.second;
            n -= x.second;
        }
    }

    cout << ans;
}