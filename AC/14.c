//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15921
#include <stdio.h>
#include <string.h>
int main(){
  char a[1001],b[1001];
  while(scanf("%s",a) !=EOF){
    int length=strlen(a); // 計算字串長度
    for(int i=0;i<=length;i++){ // b為a的倒轉字串
      b[i]=a[length-i-1];
    }
    if(strcmp(a,b)==0) // ab相同就是YES
      printf("YES\n");
    else // 否則是NO
      printf("NO\n");
  }
  return 0;
}