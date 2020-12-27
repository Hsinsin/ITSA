#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int total=0,k=3;
    while(k<=n){ // 找n以下所有3的倍數
        total+=k; //從3開始加上
        k+=3;
    }
    printf("%d\n",total);
    return 0;
}