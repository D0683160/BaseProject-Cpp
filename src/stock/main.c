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
		printf("1.�b���޲z\n");
		printf("2.�Ѳ�����\n");
		printf("3.�x��\n");
		printf("4.����t��\n");
		printf("5.�~���s��\n");
		
		scanf("%d", &option);
		
		switch(option) {
			case 1:
				printf("\n1.�n�X\n");
				printf("���N�@���^�D���\n");
				
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
		
				printf("�b�� : ");
				scanf("%s", cura);
				printf("�K�X : ");
				scanf("%s", curs);
				
				while(!feof(ac)){
					fscanf(ac, "%s %s %d", &a, &s, &totalAmount);
					if(!strcmp(cura,a)&&!strcmp(curs,s)){
						check = 1;
						break;
					}
				}
		
				if(check == 0){
					printf("�b�����s�b�αK�X���~\n");
					main();
				}
	
				totalAmount = deposit(totalAmount);
				printf("�x�Ȧ��\\!\n");
				printf("�ثe�`���B�� : ");
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
