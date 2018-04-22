//
// Created by enheng on 18-3-26.
//

#include "P1540.h"

#include <iostream>
#include <vector>
#include <set>
//#include <queue>

using namespace std;

void P1540(){
    int m, n, tmp, times = 0;
    vector<int> v;
    set<int> s;
//    queue<int> q;

    cin >> m >> n;

    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(s.find(tmp) == s.end()){
            s.insert(tmp);
            if(v.size() == m){
                s.erase(*v.begin());
                v.erase(v.begin());
            }
            v.push_back(tmp);
            times++;
        }
    }

    cout << times;
}