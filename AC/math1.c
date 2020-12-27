//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c); 
    printf("Trapezoid area:%.1f\n",(double)(a+b)*c/2); // 梯形面積代公式
    return 0;
}