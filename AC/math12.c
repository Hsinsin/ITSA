//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2924
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",(int)(n*100/23.8)+1); // 將單位全部換公分，然後因為是整數除小數點，所以一定不整除，要+1
    return 0;
}