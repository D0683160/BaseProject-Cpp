#include <stdio.h>
#include <string.h>
#include "login.h"
#define MAX 17

int login() {
	
	int option, i, j, totalAmount;			//			   	 0	 	      1
	int login = 0, reg = 0, size = 0;		//  login	  未登入	    登入 
	char id[MAX], password[MAX];			//	reg		  未註冊       已註冊 
	char tempi[MAX], tempp[MAX];			//	size	超過16字元  未超過16字元 
		
	while(!login){
		
		printf("1. 登入\n");
		printf("2. 註冊\n");
		printf("\n選項: ");
		
		scanf("%d", &option);
		switch(option) {
			case 1:	//登入 
				
				printf("\n帳號: ");
				scanf("%s", id);
				printf("密碼: ");
				scanf("%s", password);
				printf("\n");
				
				// 字元限制 
				for(i = 0; i < MAX; i++) {
					if(id[i] == '\0') {
						for(j = 0; j < MAX; j++) {
							if(password[j] == '\0') {
								size = 1;
								break;
							}
						}
						break;
					}
				}
				if(size == 0) {
					printf("帳號或密碼超過16字元\n\n");
					break;
				}
				
				// 驗證帳號 
				FILE* inptr = fopen("account.txt", "r");
				while(fscanf(inptr, "%s %s %d", tempi, tempp, &totalAmount) != EOF) {
					if(strcmp(id, tempi) == 0 && strcmp(password, tempp) == 0) {
						printf("logining ...\n\n");
						login = 1;
						break;
					}
				}
				fclose(inptr);
				
				if(login == 0) printf("帳號或密碼錯誤\n\n");
				
				break;
				
			case 2:	//註冊 
				
				printf("\n帳號: ");
				scanf("%s", id);
				printf("密碼: ");
				scanf("%s", password);
				printf("\n");
				
				// 字元限制 
				for(i = 0; i < MAX; i++) {
					if(id[i] == '\0') {
						for(j = 0; j < MAX; j++) {
							if(password[j] == '\0') {
								size = 1;
								break;
							}
						}
						break;
					}
				}
				if(size == 0) {
					printf("帳號或密碼超過16字元\n\n");
					break;
				}
				
				// 驗證帳號
				FILE* inptr2 = fopen("account.txt", "r");
				while(fscanf(inptr2, "%s %s %d", tempi, tempp, &totalAmount) != EOF) {
					if(strcmp(id, tempi) == 0) {
						reg = 1;
						break;
					}
				}
				fclose(inptr2);
				
				// 註冊帳號 
				if(reg == 1) {
					reg = 0;
					printf("帳號已有人使用\n\n");
				}
				else {
					FILE* outptr = fopen("account.txt", "a");
					fprintf(outptr, "%s %s 0\n", id, password);
					fclose(outptr);
					
					printf("registering ...\n\n");
				}
				
				break;
				
			default:
				
				printf("\nError\n\n");
				return login;
		}
	}
	
	return login;
	
}
