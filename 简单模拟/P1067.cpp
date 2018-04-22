//
// Created by enheng on 18-3-25.
//

#include "P1067.h"

#include <iostream>

using namespace std;

void P1067(){
    int n, tmp;

    cin >> n;
    for(int i = n; i >= 0; i--){
        cin >> tmp;
        if(i == 0 && tmp != 0){
            if(i != n && tmp > 0) cout << '+';
            cout << tmp;
            return;
        }
        if(tmp != 0){
            if(i != n && tmp > 0) cout << '+';
            if(abs(tmp) != 1){
                cout << tmp;
            }else if(tmp == -1) cout << '-';
            if(i == 1) cout << 'x';
            else cout << "x^" << i;
        }
    }
}
