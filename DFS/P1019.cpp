//
// Created by enheng on 18-4-24.
//

#include "P1019.h"

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int a[20] = {0};
int n1019, len = 1, ans = 0;
vector<string> v(20);

int fun(string &d, string &s) {
    for (int i = (int) d.length() - 1; i > 0; --i) {
        int si = 0;
        if (d[i] == s[0]) {
            int j = i;
            while (++j != d.length() && ++si != s.length() && d[j] == s[si]);
            if(j == d.length()) return si + 1;
        }
    }

    return 0;
}

void dfs(string &s) {
    for (int i = 0; i < n1019; i++) {
        if (a[i] < 2) {
            int ojbk = fun(s, v[i]);
            if (ojbk > 0) {
                a[i]++;
                len += v[i].length() - ojbk;
                ans = max(ans, len);
                dfs(v[i]);
                len -= v[i].length() - ojbk;
                a[i]--;
            }
        }
    }
}

void P1019() {
    string beg("0x");

    cin >> n1019;
    for (int i = 0; i < n1019; i++) {
        cin >> v[i];
    }
    cin >> beg[1];

    dfs(beg);
//    cout << fun(v[0], v[1]);

    cout << ans;
}