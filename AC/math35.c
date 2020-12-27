//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2947
#include <stdio.h>
#include <string.h>

int main(){
    int year;
    scanf("%d",&year);
    if((year%4==0&&(year%100)!=0)||(year%400)==0)  //是4的倍數、不是100的倍數、是400的倍數
        printf("Bissextile Year\n");
    else
        printf("Common Year\n");
    return 0;
}