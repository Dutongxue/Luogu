//
// Created by enheng on 18-4-14.
//

#include "P1086.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <map>
#include <tuple>

using namespace std;

void P1086(){
    int i, j, r, c, t, tmp;
    vector<vector<int>> v;
    using coord = tuple<int, int>;
    map<int, coord, greater<int>> m;

    cin >> r >> c >> t;
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            cin >> tmp;
            if(tmp != 0)
                m.insert({tmp, make_tuple(i+1, j+1)});
        }
    }

    int cr = 0, cc = get<1>((*m.begin()).second), ct = 0, ans = 0, last = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        r = get<0>((*it).second);
        c = get<1>((*it).second);
        ct += abs(r - cr) + abs(c - cc);

        last = (*it).first;
        ans += last;
        ct++;

        if(ct + r < t){
            cr = r;
            cc = c;
        }else if(ct + r == t){
            break;
        }else{
            ans -= last;
            break;
        }
    }

    cout << ans;
}