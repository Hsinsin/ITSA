//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15913
#include <stdio.h>

int gcd(int a, int b){ // 找最大公因數
    if(b == 0) // b為0就輸出a
        return a;
    else return gcd(b, a%b); // 遞迴計算gcd(b,a%b)逐個因數去除
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a=gcd(n,m); //計算最大公因數
    printf("%d\n",a);
    return 0;
}