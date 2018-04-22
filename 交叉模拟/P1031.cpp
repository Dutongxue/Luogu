//
// Created by enheng on 18-4-7.
//

#include "P1031.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void P1031(){
    int i, n, avg, times = 0, sum = 0, a[105] = {0};

    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    avg = sum / n;
    for(i = 0; i < n; i++){
        if(a[i] < avg){
            a[i + 1] -= avg - a[i];
            times++;
        }else if(a[i] > avg){
            a[i + 1] += a[i] - avg;
            times++;
        }
    }

    cout << times;

}