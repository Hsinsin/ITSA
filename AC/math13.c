//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2925
#include <stdio.h>

int main(){
    int n1,m1,n2,m2;
    scanf("%d%d%d%d",&n1,&m1,&n2,&m2);
    int total=(n2-n1)*60+(m2-m1); // total是停車時間的總秒數
    int sum=0;
    if(total>240){ // 4小時以上收60塊/30min
        sum+=60*((total-240)/30)+280; //扣掉前四小時的時間每半小時算，再加上前4小時收的錢
    }
    else if(total>120){ // 2小時以上收40塊/30min
        sum+=40*((total-120)/30)+120; // 扣掉前兩小時的時間每半小時算，再加上前兩小時收的錢
    }
    else{ // 兩小時以下30塊/30min
        sum+=30*(total/30);
    }
    printf("%d\n",sum);
    return 0;
}