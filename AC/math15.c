//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2927
#include <stdio.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    if(n>100||m>100) printf("outside\n"); // 座標超過對角那一點，就一定在方形外面
    else printf("inside\n"); // 反之在裡面
    return 0;
}