//
//  main.cpp
//  1-4
//
//  Created by Matsubara on 2013/11/21.
//  Copyright (c) 2013年 松原瑞氣. All rights reserved.
//

/*
 
 文字列が二つあると戻り値がアドレスみたいになってしまう
 
 そもそもcin使ってる時点で教科書の題意と違う気がします。
 */

#include <iostream>

using namespace std;




//入力配列の長さを調べる
int count_char(char x[]){
    int i;
    int count=0;
    
       for(i=0;x[i]!='\0';i++){
        count++;
       }
    return count;
    
    
}

char* rev_str(char x[]){
    int cnt_x;
    cnt_x=count_char(x);
    char reverse_x[cnt_x];
    int i;
    
    for(i=0;i<cnt_x;i++){
        reverse_x[i]=x[cnt_x -1 -i];
        
    }
    return reverse_x;

}


//二つ変数を返せなかった.また、文字列が二つあることを判定できなかった
char* rev_str(char x[],char y[]){
    int cnt_x;
    cnt_x=count_char(x);
    char reverse_x[cnt_x];
    
    int i;
    
    for(i=0;i<cnt_x;i++){
        reverse_x[i]=x[cnt_x -1 -i];
        
    }
    return reverse_x;
}


int main()
{

    char x1[100],x2[100];
    int i=0;
    
    //文字列を任意に二つか一つで入力できなかったので適当に1代入
  //  x2[0]=1;
    
    cout<<"文字を入力してください\n";
    cin>>x1;
    
    int cnt_x;
    cnt_x=count_char(x1);
    if(x2[0]=='\0'){
        char* y;
        y=rev_str(x1);
        for(i=0;i<count_char(x1);i++){
            cout<<y[i];
        }
        cout<<'\n';
        
    }else{
        
        for(i=0;i<count_char(x1);i++){
            cout<<x1[i];
        }
        cout<<'\n';
        
        char* y;
        y=rev_str(x1,x2);
        for(i=0;i<count_char(y);i++){
            cout<<y[i];
        }
        cout<<'\n';
        
        
    }
    
    
    return 0;
    

}
