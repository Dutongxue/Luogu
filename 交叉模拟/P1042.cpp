//
// Created by enheng on 18-4-12.
//

#include "P1042.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

void P1042(){
    char tmp;
    int i, wa = 0, la = 0;
    string s;
    vector<char> v;

    while(cin >> tmp){
        if(tmp == 'E') break;
        else v.push_back(tmp);
    }

    for(auto x : v){
        if(x == 'W') wa++;
        if(x == 'L') la++;

        if(wa == 11 || la == 11){
            cout << wa << ':' << la << endl;
            wa = 0;
            la = 0;
        }
    }
    if(wa != 0 || la != 0){
        cout << wa << ':' << la << endl;
        wa = 0;
        la = 0;
    }

    cout << endl;
    for(auto x : v){
        if(x == 'W') wa++;
        if(x == 'L') la++;

        if(wa == 21 || la == 21){
            cout << wa << ':' << la << endl;
            wa = 0;
            la = 0;
        }
    }
    if(wa != 0 || la != 0) cout << wa << ':' << la;

}