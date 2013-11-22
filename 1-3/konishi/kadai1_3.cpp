#include <iostream>

using namespace std;

double EXP(int x,int y);

int main(){
  int a,b;
  cout<<"x^yを計算します\nまずxを入力してください．"<<endl;
  cin>>a;//
  cout<<"次にyを入力してください．"<<endl;
  cin>>b;
  
  cout<<a<<"^"<<b<<"="<<EXP(a,b)<<endl;
  return 0;
}

double EXP(int x,int y){
  int y_;//yの絶対値
  double a=1.0;//戻り値

  if(y>=0){
    //指数が正の場合
    for(int i=0;i<y;i++){
      a*=x;
    }
    return a;
  }else{
    //指数が負の場合
    y_ = y*(-1);
    for(int i=0;i<y_;i++){
      a*=x;
    }
    return 1/a;
  }
}