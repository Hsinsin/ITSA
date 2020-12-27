//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15941
#include <stdio.h>

int main(){
    double x;
    double maxx=-100,minn=0x3f3f3f; // 預設最大值很小，最小值很大
    for(int i=0;i<10;i++){ // 比對10個數字找出最大最小值
        scanf("%lf",&x);
        if(x>maxx) maxx=x;
        if(x<minn) minn=x;
    }
    printf("maximum:%.2f\nminimum:%.2f\n",maxx,minn);
    return 0;
}