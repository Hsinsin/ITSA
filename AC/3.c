//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30749
#include <stdio.h>
#include <math.h>
int main(){
    int a,s;
    scanf("%d%d",&a,&s);
    if(a*a+s*s>10000) printf("outside\n"); // 點與原點距離的平方和大於半徑平方就在外面
    else printf("inside\n"); // 否則在裡面
    return 0;
}