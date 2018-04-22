//
// Created by enheng on 18-4-15.
//

#include "P1098.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void P1098(){
    int p1, p2, p3;
    string s;
    char tmp, last = 0;

    cin >> p1 >> p2 >> p3;
    cin >> s;

    for(auto it = s.begin(); it != s.end(); it++){
        if(last == 0 && *it == '-'){
            cout << *it;
            continue;
        }
        if(*it != '-'){
            last = *it;
            cout << last;
        }else{
            it++;
            if(it == s.end()){
                cout << '-';
                break;
            }
            if(*it == last+1){
                last = *it;
                cout << *it;
                continue;
            }
            if(*it <= last || abs(*it - last) >= 40){
                last = *it;
                cout << '-' << *it;
                continue;
            }

            if(p1 == 3){
                tmp = *it;
                while(--tmp != last){
                    for(int i = 0; i < p2; i++){
                        cout << '*';
                    }
                }
            }else{
                if(p3 == 1){
                    tmp = last;
                    while(++tmp != *it){
                        for(int i = 0; i < p2; i++){
                            cout << (char)(p1 == 2 && tmp >= 'a' ? tmp - 32 : tmp);
                        }
                    }
                }else if(p3 == 2){
                    tmp = *it;
                    while(--tmp != last){
                        for(int i = 0; i < p2; i++){
                            cout << (char)(p1 == 2 && tmp >= 'a' ? tmp - 32 : tmp);
                        }
                    }
                }
            }

            last = *it;
            cout << *it;

        }
    }
}