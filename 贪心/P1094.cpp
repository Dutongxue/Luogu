//
// Created by enheng on 18-5-13.
//

#include "P1094.h"

#include <iostream>

using namespace std;

void P1094(){
    int i, j, n, tmp, limit, ans = 0;
    int arr[205] = {0};

    cin >> limit;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> tmp;
        arr[tmp]++;
    }

    for(i = 200; i > 0; i--){
        while(i >= 0 && arr[i--] == 0);
        i++;
        arr[i]--;
        j = limit - i;
        while(j >= 0 && arr[j--] == 0);
        j++;
        if(j != 0){
            arr[j]--;
        }
        ans++;
        i++;
    }

    cout << ans - 1;
}