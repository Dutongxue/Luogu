//
// Created by enheng on 18-3-25.
//

#include "P1003.h"
#include <iostream>
#include <vector>

using namespace std;

void P1003(){
    int n, a, b, xl, yl, tarx, tary;
    vector<vector<int>> v;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> xl >> yl;
        v.push_back({a, b, xl, yl});
    }
    cin >> tarx >> tary;

    for(auto it = v.rbegin(); it != v.rend(); it++){
        if((*it)[0] + (*it)[2] >= tarx && (*it)[0] <= tarx && (*it)[1] + (*it)[3] >= tary && (*it)[1] <= tary) {
            cout << n - (it - v.rbegin());
            return;
        }
    }

    cout << -1;
}