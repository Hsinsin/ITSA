//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6861
#include <stdio.h>

int main(){
    int a,b;
    while(scanf("%d",&a)!=EOF){ // 多筆測資，所以讀到EOF為止
        scanf("%d",&b);
        printf("%d\n",a+b); // a+b
    }   
    return 0;
}