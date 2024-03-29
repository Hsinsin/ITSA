//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30779
#include<stdio.h>
#include<stdlib.h>

//建表換算英文代表的數字
int id_num(char ch){
    switch(ch){
        case 'A': return 10 ;break;   case 'P': return 23; break;
        case 'B': return 11 ;break;   case 'Q': return 24; break;
        case 'C': return 12 ;break;   case 'R': return 25; break;
        case 'D': return 13 ;break;   case 'S': return 26; break;
        case 'E': return 14 ;break;   case 'T': return 27; break;
        case 'F': return 15 ;break;   case 'U': return 28; break;
        case 'G': return 16 ;break;   case 'V': return 29; break;
        case 'H': return 17 ;break;   case 'W': return 32; break;
        case 'I': return 34 ;break;   case 'X': return 30; break;
        case 'J': return 18 ;break;   case 'Y': return 31; break;
        case 'K': return 19 ;break;   case 'Z': return 33; break;
        case 'L': return 20 ;break;   
        case 'M': return 21 ;break;   
        case 'N': return 22 ;break;   
        case 'O': return 35 ;break;
    }
}
int main(){
    char id[11]={'\0'};
    int i=0,tmp,total=0;
    for(i=0;i<10;i++){
        scanf("%c",&id[i]);
    }
    //將英文字轉成數字
    tmp=id_num(id[0]);
    //代入公式
    total= (tmp%10)*9 + tmp/10 + (id[1]-'0')*8 + (id[2]-'0')*7 + (id[3]-'0')*6 + (id[4]-'0')*5 + (id[5]-'0')*4 + (id[6]-'0')*3 + (id[7]-'0')*2 + (id[8]-'0')*1 + (id[9]-'0')*1;
    if(total%10==0) // total可以被10整除就是正確的身分證
        printf("CORRECT!!!\n");
    else
        printf("WRONG!!!\n");
}