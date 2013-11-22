//
//  main.cpp
//  1-3
//
//  Created by miyagawa on 2013/11/21.
//  Copyright (c) 2013年 miyagawa. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, ans=1;
    
    //入力
    cout << "base:";
    cin >> num1;
    cout << "exponent:";
    cin >> num2;
    
    //計算
    for (int i=0; i<abs(num2); i++) {
        ans *= num1;
    }
    
    //表示
    cout << "answer: ";
    if (num2<0) {
        cout << "1/" << ans << "\n";
    }else {
        cout << ans << "\n";
    }
    
    return 0;
}