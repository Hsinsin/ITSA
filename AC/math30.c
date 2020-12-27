//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2942
#include <stdio.h>

int main()
{
    int n,c=2;
    scanf("%d",&n);
    for(c=2;c<n;c++){ // 1不是質數，從二開始一個一個找到n-1
        if (n %c == 0){ // 只要有任何一個數可以整除就代表n不是質數
            printf("NO\n");
            break;
        }
    }
    if(c==n) // 因數只有1跟自己就是質數
        printf("YES\n");
    return 0;
}
