//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2923
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("NT10=%d\n",n/10); // 先求有多少個10
    n-=n/10*10; // 再扣掉10元的總額
    printf("NT5=%d\n",n/5); // 再求有多少個5
    n-=n/5*5; // 再扣掉5元的總額
    printf("NT1=%d\n",n); //就剩下1的數量
    return 0;
}