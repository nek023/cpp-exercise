#include <iostream>

using namespace std;

double EXP(int x,int y);

int main(){
  int a,b;
  cout<<"x^y���v�Z���܂�\n�܂�x����͂��Ă��������D"<<endl;
  cin>>a;//
  cout<<"����y����͂��Ă��������D"<<endl;
  cin>>b;
  
  cout<<a<<"^"<<b<<"="<<EXP(a,b)<<endl;
  return 0;
}

double EXP(int x,int y){
  int y_;//y�̐�Βl
  double a=1.0;//�߂�l

  if(y>=0){
    //�w�������̏ꍇ
    for(int i=0;i<y;i++){
      a*=x;
    }
    return a;
  }else{
    //�w�������̏ꍇ
    y_ = y*(-1);
    for(int i=0;i<y_;i++){
      a*=x;
    }
    return 1/a;
  }
}