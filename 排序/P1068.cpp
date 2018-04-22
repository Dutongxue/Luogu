//
// Created by enheng on 18-4-20.
//

#include "P1068.h"

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;
using item = pair<int, int>;

bool cmp(const item &a, const item &b){
    if(a.first == b.first){
        return a.second < b.second;
    }else{
        return a.first > b.first;
    }
}

void P1068(){
    int i, n, m, num, score;
    vector<item> rank;

    cin >> n >> m;
    for(i = 0; i < n; i++){
        cin >> num >> score;
        rank.push_back({score, num});
    }
    sort(rank.begin(), rank.end(), cmp);

    score = rank[m * 1.5 - 1].first;
    cout << score << ' ';

    ostringstream ostr;

    for(i = 0; i < n; i++){
        ostr << rank[i].second << ' ' << rank[i].first;
        if(rank[i + 1].first <score){
            break;
        }else{
            ostr << endl;
        }
    }
    cout << i + 1 << endl;
    cout << ostr.str();
}