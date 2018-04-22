//
// Created by enheng on 18-4-20.
//

#include "P1181.h"

#include <iostream>

using namespace std;

void P1181() {
    int i, n, m, last = 0, tmp, ans = 0;

    cin >> n >> m;
    for (i = 0; i < n; i++) {
        cin >> tmp;
        if (last + tmp <= m) {
            last += tmp;
        } else {
            ans++;
            last = tmp;
        }
    }

    cout << ans + 1;
}