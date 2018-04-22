//
// Created by enheng on 18-3-30.
//

#include "P1328.h"

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(int &a, int &b){
    switch (a){
        case 0:
            if(b == 2 || b == 3) return true;
            break;
        case 1:
            if(b == 0 || b == 3) return true;
            break;
        case 2:
            if(b == 1 || b == 4) return true;
            break;
        case 3:
            if(b == 2 || b == 4) return true;
            break;
        case 4:
            if(b == 0 || b == 1) return true;
    }
    return false;
}

void P1328(){
    int i, tmp, n, na, nb, scorea(0), scoreb(0);
    vector<int> va, vb;

    cin >> n >> na >> nb;
    for(i = 0; i < na; i++){
        cin >> tmp;
        va.push_back(tmp);
    }
    for(i = 0; i < nb; i++){
        cin >> tmp;
        vb.push_back(tmp);
    }

    for(i = 0; i < n; i++){
        if(va[i % na] == vb[i % nb])
            continue;
        if(cmp(va[i % na], vb[i % nb]))
            scorea++;
        else
            scoreb++;
    }

    cout << scorea << ' ' << scoreb;
}