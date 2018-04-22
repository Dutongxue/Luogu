//
// Created by enheng on 18-3-31.
//

#include "P1563.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void P1563(){
    int m, n, i, s, sign = 0;
    vector<pair<int, string>> v;
    int dir;
    string job;

    cin >> n >> m;
    for(i = 0; i < n; i++){
        cin >> dir >> job;
        v.push_back({dir, job});
    }
    for(i = 0; i < m; i++){
        cin >> dir >> s;

        if(dir ^ v[sign].first){
            sign += s;
        }else{
            sign -= s;
        }

        if(sign < 0){
            sign += n;
        }else{
            sign %= n;
        }
//        cout << v[sign].second << endl;
    }

    cout << v[sign].second;

}