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
	printf("\t社交系統\n"); 
	printf("*****************************\n");
	printf("已連線！\n\n");
	
	int i = 0;
	while(true){
		printf("\t----------------------\n");
		printf("\t|                     |\n");
		printf("\t| 1.聊天室            |\n");
		printf("\t| 2.管理好友系統      |\n");
		printf("\t|                     |\n");
		printf("\t----------------------\n");
		
		int input=0, j=0; char temp[20], message[100];
		scanf("%d", &input);
		if(input == 0) break;
		if(input == 1){
			printf("聊天室：\n");
			printf("\t----------------------\n");
			printf("\t|                     |\n");
			printf("\t| 1.私聊              |\n");
			printf("\t| 2.公開聊天          |\n");
			printf("\t|                     |\n");
			printf("\t----------------------\n");
			scanf("%d", &input);
			if(input == 1){
				printf("私聊：\n");
				printf("輸入好友名字：");
				scanf("%s", &temp);
				for(j=0;j<=i;j++){
					if(!strcmp(temp, Friend[j].name)){
						printf("**********Type here***********\n::");
						scanf("%s", message);
						printf("..........等待回覆中..........\n\n\n\n\n\n\n");
						break;
					}else printf("not found\n");
				} 
			}else if(input == 2){
				printf("公開聊天：\n");
				printf("**********歡迎來到公眾聊天室***********\n\n");
				printf("**********Type here***********\n::");
				scanf("%s", message);
				printf("..........等待回覆中..........\n\n\n\n\n\n\n");
			} 
		}  
		else if(input == 2){
			printf("管理好友系統：\n");
			printf("\t----------------------\n");
			printf("\t|                     |\n");
			printf("\t| 1.新增好友          |\n");
			printf("\t| 2.刪除好友          |\n");
			printf("\t| 3.拉黑用戶          |\n");
			printf("\t| 4.舉報好友          |\n");
			printf("\t|                     |\n");
			printf("\t----------------------\n");
			scanf("%d", &input);
			if(input == 1){
				printf("請輸入他的名字： ");
				scanf("%s", Friend[i].name); 
				i++;
				printf("已添加好友！\n");
			} else if(input == 2){
				printf("請輸入要刪除的好友名字： ");
				scanf("%s", &temp);
				for(j=0;j<=i;j++){
					if(strcmp(temp, Friend[j].name)){
						Friend[j].name == NULL;
						printf("已刪除！\n");
						break;
					}
				}
			} else if(input ==3){
				printf("請輸入要拉黑的用戶名字： ");
				scanf("%s", &temp);
				for(j=0;j<=i;j++){
					if(strcmp(temp, Friend[j].name)){
						Friend[j].name == NULL;
						printf("已拉黑！\n");	
					} 
					break;
				}
			} else if(input ==4){
				printf("請輸入要舉報的用戶名字： ");
				scanf("%s", &Friend[i].blacklist);
				i++;
				printf("已舉報！\n");
			}
		}else printf("請重新選擇\n"); 
	}
	printf("\n\n\n\n*****************退出APP***************\n");
}
#endif
