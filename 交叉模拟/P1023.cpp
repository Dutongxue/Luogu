//
// Created by enheng on 18-4-1.
//

#include "P1023.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void P1023(){
    int offprice, price, sales, desales;
    vector<pair<int, int>> v;

    cin >> offprice;
    for(;;){
        cin >> price >> sales;
        if(price == -1) break;
        v.push_back({price, sales});
    }
    cin >> desales;



}