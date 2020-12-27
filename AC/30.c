//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15935
#include <stdio.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m); // 總之就是判斷月份日期是什麼星座
    if((n==1&&m>20)||(n==2&&m<19)) printf("Aquarius\n");
    else if((n==2&&m>18)||(n==3&&m<21)) printf("Pisces\n");
    else if((n==3&&m>20)||(n==4&&m<21)) printf("Aries\n");
    else if((n==4&&m>20)||(n==5&&m<22)) printf("Taurus\n");
    else if((n==5&&m>21)||(n==6&&m<22)) printf("Gemini\n");
    else if((n==6&&m>21)||(n==7&&m<23)) printf("Cancer\n");
    else if((n==7&&m<22)||(n==8&&m<24)) printf("Leo\n");
    else if((n==8&&m>23)||(n==9&&m<24)) printf("Virgo\n");
    else if((n==9&&m>23)||(n==10&&m<24)) printf("Libra\n");
    else if((n==10&&m>23)||(n==11&&m<21)) printf("Scorpio\n");
    else if((n==11&&m>24)||(n==12&&m<22)) printf("Sagittarius\n");
    else printf("Capricorn\n");
    return 0;
}