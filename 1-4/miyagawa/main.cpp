//
//  main.cpp
//  1-4
//
//  Created by miyagawa on 2013/11/21.
//  Copyright (c) 2013年 miyagawa. All rights reserved.
//

#include <iostream>
using namespace std;

void rev_str(char *s1){
    char tmp;
    long len = strlen(s1);
    for (int i=0; i<len/2; i++) {
        tmp = s1[i];
        s1[i] = s1[len-1-i];
        s1[len-1-i] = tmp;
    }
}

void rev_str(char *s1, char *s2){
    rev_str(s2);
}

int main()
{
    char s1[80], s2[80];
    strcpy(s1, "hello");
    strcpy(s2, "byeb");
    rev_str(s1, s2);
    rev_str(s1);
    
    cout << "s1:" << s1 << "\n";
    cout << "s2:" << s2 << "\n";
    
    return 0;
}

