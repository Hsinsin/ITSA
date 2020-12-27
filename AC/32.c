//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30782
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main(){
    char c[1024];
    int n,temp;
    fgets(c,1024,stdin); // 讀一行~
    scanf("%d",&n);
    int k=strlen(c); // 計算c的長度
    for(int i=0;i<k;i++){ // 去找c裡面每個字
        if(isalpha(c[i])){ // 是英文
            if(n<0) temp=26-abs(n)%26; // 如果位移量n<0，把他調整成>0，ex:位移-1就等於位移+25
            else temp=n%26; // 無論正負都對26取膜，因為變更範圍要在英文範圍內
            if(isupper(c[i])){ 
                c[i]=(c[i]-'A'+temp)%26+65; // 為了避免超出ascii顯示範圍，先扣掉'A'，再加上位移量，然後再對26取膜，最後加上'A'即可
            }
            else{
                c[i]=(c[i]-'a'+temp)%26+97; // 小寫同理
            }
        }
        else if(isdigit(c[i])){
            if(n<0) temp=10-abs(n)%10; //數字部分同理，不過範圍就變成10
            else temp=n%10;
            c[i]=(c[i]-'0'+temp)%10+48;
        }
    }
    printf("%s",c);
}