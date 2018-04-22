//
// Created by enheng on 18-4-18.
//

#include "P1219.h"

#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>

#include <cstring>

using namespace std;

int n, ans = 0;
int a[20], b[20] = {0}, c[38] = {0}, d[38] = {0};

void dfs(int r){
    if(r == n){
        if(ans < 3){
            for(int i = 0; i < n; i++){
                cout << a[i] << ' ';
            }
            cout << endl;
        }
        ans++;
        return;
    }

    for(int j = 0; j < n; j++){
        if(!b[j] && !c[r-j+n] && !d[r+j+1]){
            a[r] = j + 1;
            b[j] = 1;
            c[r-j+n] = 1;
            d[r+j+1] = 1;
            dfs(r+1);
            b[j] = 0;
            c[r-j+n] = 0;
            d[r+j+1] = 0;
        }
    }
}

//int a[100],b[100],c[100],d[100];
////a数组表示的是行；
////b数组表示的是列；
////c表示的是左下到右上的对角线；
////d表示的是左上到右下的对角线；
//int ans = 0;//总数:记录解的总数
//int n;//输入的数，即N*N的格子，全局变量，搜索中要用
//int print()
//{
//    if(ans<=2)//保证只输出前三个解，如果解超出三个就不再输出，但后面的total还需要继续叠加
//    {
//        for(int k=1;k<=n;k++)
//            cout<<a[k]<<" ";//for语句输出
//        cout<<endl;
//    }
//    ans++;//total既是总数，也是前三个排列的判断
//}
//void queen(int i)//搜索与回溯主体
//{
//    if(i>n)
//    {
//        print();//输出函数，自己写的
//        return;
//    }
//    else
//    {
//        for(int j=1;j<=n;j++)//尝试可能的位置
//        {
//            if((!b[j])&&(!c[i+j])&&(!d[i-j+n]))//如果没有皇后占领，执行以下程序
//            {
//                a[i]=j;//标记i排是第j个
//                b[j]=1;//宣布占领纵列
//                c[i+j]=1;
//                d[i-j+n]=1;
//                //宣布占领两条对角线
//                queen(i+1);//进一步搜索，下一个皇后
//                b[j]=0;
//                c[i+j]=0;
//                d[i-j+n]=0;
//                //（回到上一步）清除标记
//            }
//        }
//    }
//}


void P1219(){
    cin >> n;
    dfs(0);
    cout << ans;
}