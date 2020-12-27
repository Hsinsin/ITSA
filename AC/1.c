//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30746
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char num[100]; 
	scanf("%s",num); // 存入要轉換的四位數字
	char ans[5][100]={{0}}; // 預設需輸出的陣列，共五行
	int len=strlen(num); // 雖然說四位數可是我還是量長度啦
	for(int i=0;i<len;i++){
		switch ((int)num[i]-48){ // 因為是用char型態存，所以判斷ascii是哪個數字
    		case 0: //得到數字後分別在每一行加上所需的符號，以下都相同
	    		strcat(ans[0],"*****"); 
		    	strcat(ans[1],"*   *");
			    strcat(ans[2],"*   *");
    			strcat(ans[3],"*   *");
	    		strcat(ans[4],"*****");
		    	break;
    		case 1:
	    		strcat(ans[0],"    *");
		    	strcat(ans[1],"    *");
			    strcat(ans[2],"    *");
    			strcat(ans[3],"    *");
	    		strcat(ans[4],"    *");
		    	break;
    		case 2:
	    		strcat(ans[0],"*****");
		    	strcat(ans[1],"    *");
			    strcat(ans[2],"*****");
			    strcat(ans[3],"*    ");
			    strcat(ans[4],"*****");
			    break;
		    case 3:
			    strcat(ans[0],"*****");
    			strcat(ans[1],"    *");
	    		strcat(ans[2],"*****");
		    	strcat(ans[3],"    *");
			    strcat(ans[4],"*****");
    			break;
	    	case 4:
		    	strcat(ans[0],"*   *");
			    strcat(ans[1],"*   *");
    			strcat(ans[2],"*****");
	    		strcat(ans[3],"    *");
		    	strcat(ans[4],"    *");
			    break;
    		case 5:
	    		strcat(ans[0],"*****");
		    	strcat(ans[1],"*    ");
			    strcat(ans[2],"*****");
    			strcat(ans[3],"    *");
	    		strcat(ans[4],"*****");
		    	break;
    		case 6:
	    		strcat(ans[0],"*****");
		    	strcat(ans[1],"*    ");
			    strcat(ans[2],"*****");
    			strcat(ans[3],"*   *");
	    		strcat(ans[4],"*****");
		    	break;
    		case 7:
	    		strcat(ans[0],"*****");
		    	strcat(ans[1],"    *");
			    strcat(ans[2],"    *");
    			strcat(ans[3],"    *");
	    		strcat(ans[4],"    *");
		    	break;
    		case 8:
	    		strcat(ans[0],"*****");
		    	strcat(ans[1],"*   *");
			    strcat(ans[2],"*****");
    			strcat(ans[3],"*   *");
	    		strcat(ans[4],"*****");
		    	break;
    		default:
	    		strcat(ans[0],"*****");
		    	strcat(ans[1],"*   *");
			    strcat(ans[2],"*****");
    			strcat(ans[3],"    *");
	    		strcat(ans[4],"*****");
		    	break;
		}
		if(i!=3){ // 到最後一個以前字都有空格隔開
			strcat(ans[0]," ");
			strcat(ans[1]," ");
			strcat(ans[2]," ");
			strcat(ans[3]," ");
			strcat(ans[4]," ");
		}
	}
	for(int i=0;i<5;i++){ // 輸出答案
		printf("%s\n",ans[i]);
	}
    return 0;
}