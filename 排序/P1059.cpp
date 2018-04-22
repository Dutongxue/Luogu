//
// Created by enheng on 18-4-16.
//

#include "P1059.h"

#include <iostream>
#include <set>

using namespace std;

void P1059(){
    int n, tmp;
    set<int> s;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        s.insert(tmp);
    }

    cout << s.size() << endl;
    for(auto x:s){
        cout << x << ' ';
    }
}