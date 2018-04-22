//
// Created by enheng on 18-4-19.
//

#include "P1162.h"

#include <iostream>

using namespace std;

int n, arr[30][30], flag[30][30], dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

void dfs(int x, int y){
    for(int i = 0; i < 4; i++){
        int nx = x + dir[i][0];
        int ny = y + dir[i][1];

        if(nx >= 0 && nx < n && ny >= 0 && ny < n){
            if(arr[nx][ny] == 0 && flag[nx][ny] != 1){
                flag[nx][ny] = 1;
                dfs(nx, ny);
            }
        }
    }
}

void print(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 0 && flag[i][j] == 0){
                cout << 2 << ' ';
            }else{
                cout << arr[i][j] << ' ';
            }
        }
        cout << endl;
    }
}

void P1162(){
    int i;
    
    cin >> n;
    for(i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(i = 0; i < n; i++){
        if(arr[0][i] == 0 & flag[0][i] != 1){
            flag[0][i] = 1;
            dfs(0, i);
        }
    }

    for(i = 0; i < n; i++){
        if(arr[i][0] == 0 & flag[i][0] != 1){
            flag[i][0] = 1;
            dfs(i, 0);
        }
    }

    for(i = 0; i < n; i++){
        if(arr[i][n - 1] == 0 & flag[i][n - 1] != 1){
            flag[i][n - 1] = 1;
            dfs(i, n - 1);
        }
    }

    for(i = 0; i < n; i++){
        if(arr[n - 1][i] == 0 & flag[n - 1][i] != 1){
            flag[n - 1][i] = 1;
            dfs(n - 1, i);
        }
    }

    print();
}