//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30792
#include <stdio.h>

int main(){
    int n,m;
    while(scanf("%d",&n)!=EOF){
        scanf("%d",&m);
        if(m==1) printf("%.1f\n",(double)(n-80)*0.7); // 男生的標準體重
        else printf("%.1f\n",(double)(n-70)*0.6); // 女生的標準體重
    }
    return 0;
}