#ifndef social_h
#define social_h
#include<stdio.h>
#include<string.h>

typedef struct person{
	char name[20];
	char blacklist[20]; 
}person;

int main(){
	
	person Friend[100];
	printf("*****************************\n");
	printf("\t����t��\n"); 
	printf("*****************************\n");
	printf("�w�s�u�I\n\n");
	
	int i = 0;
	while(true){
		printf("\t----------------------\n");
		printf("\t|                     |\n");
		printf("\t| 1.��ѫ�            |\n");
		printf("\t| 2.�޲z�n�ͨt��      |\n");
		printf("\t|                     |\n");
		printf("\t----------------------\n");
		
		int input=0, j=0; char temp[20], message[100];
		scanf("%d", &input);
		if(input == 0) break;
		if(input == 1){
			printf("��ѫǡG\n");
			printf("\t----------------------\n");
			printf("\t|                     |\n");
			printf("\t| 1.�p��              |\n");
			printf("\t| 2.���}���          |\n");
			printf("\t|                     |\n");
			printf("\t----------------------\n");
			scanf("%d", &input);
			if(input == 1){
				printf("�p��G\n");
				printf("��J�n�ͦW�r�G");
				scanf("%s", &temp);
				for(j=0;j<=i;j++){
					if(!strcmp(temp, Friend[j].name)){
						printf("**********Type here***********\n::");
						scanf("%s", message);
						printf("..........���ݦ^�Ф�..........\n\n\n\n\n\n\n");
						break;
					}else printf("not found\n");
				} 
			}else if(input == 2){
				printf("���}��ѡG\n");
				printf("**********�w��Ө줽����ѫ�***********\n\n");
				printf("**********Type here***********\n::");
				scanf("%s", message);
				printf("..........���ݦ^�Ф�..........\n\n\n\n\n\n\n");
			} 
		}  
		else if(input == 2){
			printf("�޲z�n�ͨt�ΡG\n");
			printf("\t----------------------\n");
			printf("\t|                     |\n");
			printf("\t| 1.�s�W�n��          |\n");
			printf("\t| 2.�R���n��          |\n");
			printf("\t| 3.�Զ¥Τ�          |\n");
			printf("\t| 4.�|���n��          |\n");
			printf("\t|                     |\n");
			printf("\t----------------------\n");
			scanf("%d", &input);
			if(input == 1){
				printf("�п�J�L���W�r�G ");
				scanf("%s", Friend[i].name); 
				i++;
				printf("�w�K�[�n�͡I\n");
			} else if(input == 2){
				printf("�п�J�n�R�����n�ͦW�r�G ");
				scanf("%s", &temp);
				for(j=0;j<=i;j++){
					if(strcmp(temp, Friend[j].name)){
						Friend[j].name == NULL;
						printf("�w�R���I\n");
						break;
					}
				}
			} else if(input ==3){
				printf("�п�J�n�Զª��Τ�W�r�G ");
				scanf("%s", &temp);
				for(j=0;j<=i;j++){
					if(strcmp(temp, Friend[j].name)){
						Friend[j].name == NULL;
						printf("�w�Զ¡I\n");	
					} 
					break;
				}
			} else if(input ==4){
				printf("�п�J�n�|�����Τ�W�r�G ");
				scanf("%s", &Friend[i].blacklist);
				i++;
				printf("�w�|���I\n");
			}
		}else printf("�Э��s���\n"); 
	}
	printf("\n\n\n\n*****************�h�XAPP***************\n");
}
#endif
