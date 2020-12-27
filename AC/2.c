//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30747
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n); // 讀入一個integer
    printf("%.1f\n",(double)n*1.6); // 轉換完之後轉成double型態並輸出到小數點後一位
    return 0;
}