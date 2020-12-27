//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2928
#include <stdio.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    if(n*n+m*m>10000) printf("outside\n"); // 座標對原點的平方和大於半徑平方，就在外面
    else printf("inside\n"); // 反之在裡面
    return 0;
}