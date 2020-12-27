//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15917
#include <stdio.h>

int p(int n){
    if(n==0||n==1) return (n+1); // 0跟1輸出n+1
    else if(n>1) return (p(n-1)+p(n/2)); // 其他重複遞迴p(n-1)+p(n/2)
}


int main(){
    int n;
    scanf("%d",&n);
    int a=p(n); // a是計算n的p遞迴結果
    printf("%d\n",a);
    return 0;
}