#include "deposit.h"

int deposit(int totalAmount){
	srand(time(NULL));
	int check = 0, i, text, temp;
	char cardNumber[17], code[4], date[6], name[30], number[11], ch[10], filename[20];
	char cur_cardNumber[17], cur_code[4], cur_date[6], cur_name[30], cur_number[11];
	FILE *bank = NULL, *ac = NULL, *numText = NULL;
	
	system("CLS");
	for(i = 0; i < 3; i++){
		bank = fopen("bank.txt", "r");
		printf("目前總金額 : %d\n", totalAmount);
		printf("請輸入信用卡卡號，信用卡安全碼，信用卡有效期限，個人姓名及電話\n");
		printf("EX : 信用卡卡號 信用卡安全碼 信用卡有效期限 個人姓名 電話\n");
		printf("EX : 6547549724165487 123 05/24 王小明 0935456789\n");
		printf("請輸入 :　");
		scanf("%s %s %s %s %s", cur_cardNumber, cur_code, cur_date, cur_name, cur_number);
		while(!feof(bank)){
			fscanf(bank,"%s %s %s %s %s", cardNumber, code, date, name, number);
			if(!strcmp(cur_cardNumber,cardNumber)&&!strcmp(cur_code,code)&&!strcmp(cur_date,date)&&!strcmp(cur_name,name)&&!strcmp(cur_number,number)){
				check = 1;
				break;
			}
		}
		if(check == 1){
			break;
		}
		else{
			printf("信用卡資訊或個人資訊錯誤\n");
		}
	}
	if(check == 0){
		printf("輸入次數過多，是否重新進行儲值...y重新,n離開\n");
		scanf("%s", &ch);
		if(!strcmp(ch,"y")){
			system("CLS");
			deposit(totalAmount);
		}
		else{
			system("CLS");
			main();
		}
	}
	
	system("CLS");
	
	check = 0;
	sprintf(filename, "%s.txt", cur_number);
	numText = fopen(filename, "w");
	for(i = 0; i < 3; i++){
		text = (rand() % 9001) +1000;
		fprintf(numText, "%d", text);
		fclose(numText);
		printf("請輸入驗證碼 : ");
		scanf("%d", &temp);
		if(temp == text){
			check = 1;
			break;
		}
		else{
			printf("驗證碼錯誤\n");
		}
	}
	if(check == 0){
		printf("輸入次數過多，是否重新進行儲值...y重新,n離開\n");
		scanf("%s", &ch);
		if(!strcmp(ch,"y")){
			system("CLS");
			deposit(totalAmount);
		}
		else{
			system("CLS");
			main();
		}
	}
	fclose(bank);
	system("CLS");
	
	printf("輸入儲值金額 : ");
	scanf("%d", &temp);
	totalAmount += temp;
	return totalAmount;
}
