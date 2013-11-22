#include <iostream>
#include <string.h>
using namespace std;

void rev_str(char *str);
void rev_str(char *in,char *out);

int main(){
  char s1[80],s2[80];
  strcpy(s1,"hello");
  cout<<"s1="<<s1<<endl;
  
  rev_str(s1,s2);
  cout<<"s2="<<s2<<endl;
  
  rev_str(s1);
  cout<<"s1="<<s1<<endl;
  return 0;
}

void rev_str(char *str){
  int len=strlen(str); //•¶š—ñ‚Ì’·‚³‚ğæ“¾
  char tmp;
  
  for(int i=0;i<len/2;i++){
    //str[i]‚Æstr[length-i-1]‚ğŒğŠ·
    tmp=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=tmp;
  }
}

void rev_str(char *in,char *out){
  int len=strlen(in);//•¶š—ñ‚Ì’·‚³‚ğæ“¾
  
  for(int i=len-1;i>=0;i--){
    //•¶š—ñin ‚ÌŒã‚ë‚©‚ç•¶š—ñout ‚É‡‚ÉŠi”[
    out[len-i-1]=in[i];
  }
  out[len]='\0';//NULL‚ÅI’[‚Æ‚·‚é
}
