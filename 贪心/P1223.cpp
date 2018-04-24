//
// Created by enheng on 18-4-24.
//

#include "P1223.h"

#include <iostream>
#include <map>

using namespace std;

void P1223(){
    int n, t, tmp = 0;
    double sum = 0.0;
    multimap<int, int> m;

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> t;
        m.insert({t, i});
    }

    for(auto x:m){
        cout << x.second<< ' ';
        tmp += x.first;
        sum += tmp;
    }

    sum -= tmp;

    printf("\n%.2lf", sum / n);
}