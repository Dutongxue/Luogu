//
// Created by enheng on 18-3-30.
//

#include "P1056.h"

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b){
    return a.second > b.second;
}

void P1056(){
    int m, n, k, l, d;
    int xi, yi, pi, qi;
    int i;
    map<int, int> mx, my;

    cin >> m >> n >> k >> l >> d;
    for(i = 0; i < d; i++){
        cin >> xi >> yi >> pi >> qi;
        if(xi == pi){
            mx[min(yi, qi)]++;  //列
        }else{
            my[min(xi, pi)]++;  //行
        }
    }

    vector<pair<int, int>> vx(mx.begin(), mx.end()), vy(my.begin(), my.end());
    sort(vx.begin(), vx.end(), cmp);
    sort(vy.begin(), vy.end(), cmp);

    vector<int> ansx, ansy;

    for(i = 0; i < k; i ++){
        ansx.push_back(vy[i].first);
    }
    for(i = 0; i < l; i ++){
        ansy.push_back(vx[i].first);
    }

    sort(ansx.begin(), ansx.end());
    sort(ansy.begin(), ansy.end());

    for(auto x : ansx){
        cout << x << ' ';
    }

    cout << endl;

    for(auto y : ansy){
        cout << y << ' ';
    }

}