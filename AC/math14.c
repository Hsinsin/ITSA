//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2926
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int day=n/60/60/24; // 秒數換天數
    n-=86400*day; // 扣掉天數的總秒數
    int hours=n/60/60; // 秒數換小時
    n-=3600*hours; // 扣掉小時的總秒ˇ數
    int min=n/60; // 秒數換分鐘
    n-=60*min; // 扣掉分鐘的總秒數
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n",day,hours,min,n); // n剩下的就是剩下的秒數
    return 0;
}