//
// Created by enheng on 18-4-21.
//

#include "P1781.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <cstring>

using namespace std;
using item = pair<int, string>;

bool cmp(const item &a, const item &b){
    if(a.second.size() == b.second.size()){
        return a.second > b.second;
    }else if(a.second.size() > b.second.size()){
        return true;
    }else{
        return false;
    }
}

void P1781(){
    int n;
    string tmp;
    vector<pair<int, string>> v;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back({i + 1, tmp});
    }

    sort(v.begin(), v.end(), cmp);

    cout << v[0].first << endl << v[0].second;
}