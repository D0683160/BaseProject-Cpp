#include <stdio.h>
#include <string.h>
#include "login.h"
#define MAX 17

int login() {
	
	int option, i, j, totalAmount;			//			   	 0	 	      1
	int login = 0, reg = 0, size = 0;		//  login	  ���n�J	    �n�J 
	char id[MAX], password[MAX];			//	reg		  �����U       �w���U 
	char tempi[MAX], tempp[MAX];			//	size	�W�L16�r��  ���W�L16�r�� 
		
	while(!login){
		
		printf("1. �n�J\n");
		printf("2. ���U\n");
		printf("\n�ﶵ: ");
		
		scanf("%d", &option);
		switch(option) {
			case 1:	//�n�J 
				
				printf("\n�b��: ");
				scanf("%s", id);
				printf("�K�X: ");
				scanf("%s", password);
				printf("\n");
				
				// �r������ 
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
					printf("�b���αK�X�W�L16�r��\n\n");
					break;
				}
				
				// ���ұb�� 
				FILE* inptr = fopen("account.txt", "r");
				while(fscanf(inptr, "%s %s %d", tempi, tempp, &totalAmount) != EOF) {
					if(strcmp(id, tempi) == 0 && strcmp(password, tempp) == 0) {
						printf("logining ...\n\n");
						login = 1;
						break;
					}
				}
				fclose(inptr);
				
				if(login == 0) printf("�b���αK�X���~\n\n");
				
				break;
				
			case 2:	//���U 
				
				printf("\n�b��: ");
				scanf("%s", id);
				printf("�K�X: ");
				scanf("%s", password);
				printf("\n");
				
				// �r������ 
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
					printf("�b���αK�X�W�L16�r��\n\n");
					break;
				}
				
				// ���ұb��
				FILE* inptr2 = fopen("account.txt", "r");
				while(fscanf(inptr2, "%s %s %d", tempi, tempp, &totalAmount) != EOF) {
					if(strcmp(id, tempi) == 0) {
						reg = 1;
						break;
					}
				}
				fclose(inptr2);
				
				// ���U�b�� 
				if(reg == 1) {
					reg = 0;
					printf("�b���w���H�ϥ�\n\n");
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
