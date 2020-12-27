//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2931
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>1499) printf("%.1f\n",(double)(n*0.9*0.79)); // 超過1500打79折
    else if(n>800) printf("%.1f\n",(double)(n*0.9*0.9)); // 超過800小於1500打9折
    else printf("%.1f\n",(double)(n*0.9));
    return 0;
}