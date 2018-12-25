#include <stdio.h>
#include <stdlib.h>
#include "login.h"
#include "social.h"
#include "deposit.h"
#include "stock.h"

int main() {
	
	FILE *ac = NULL;
	int verify = 0, option;
	
	verify = login();
	
	while(verify) {
		printf("1.帳號管理\n");
		printf("2.股票市場\n");
		printf("3.儲值\n");
		printf("4.社交系統\n");
		printf("5.外部連結\n");
		
		scanf("%d", &option);
		
		switch(option) {
			case 1:
				printf("\n1.登出\n");
				printf("任意一鍵返回主選單\n");
				
				scanf("%d", &option);
				
				switch(option) {
					case 1:
						verify = login();
					default:
						break;
				}
				break;
			case 2:
				stock();
				break;
			case 3:
				ac = fopen("account.txt", "r");
				char a[17], s[17], cura[17], curs[17];
				int totalAmount = 0, check = 0;
		
				printf("帳號 : ");
				scanf("%s", cura);
				printf("密碼 : ");
				scanf("%s", curs);
				
				while(!feof(ac)){
					fscanf(ac, "%s %s %d", &a, &s, &totalAmount);
					if(!strcmp(cura,a)&&!strcmp(curs,s)){
						check = 1;
						break;
					}
				}
		
				if(check == 0){
					printf("帳號不存在或密碼錯誤\n");
					main();
				}
	
				totalAmount = deposit(totalAmount);
				printf("儲值成功\!\n");
				printf("目前總金額為 : ");
				printf("%d\n", totalAmount);
				fclose(ac);
				break;
			case 4:
				social();
				break;
			case 5:
				
			default:
				break;
		}
	}
	
	
	return 0;
	
}
