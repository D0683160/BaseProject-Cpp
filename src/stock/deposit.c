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
		printf("�ثe�`���B : %d\n", totalAmount);
		printf("�п�J�H�Υd�d���A�H�Υd�w���X�A�H�Υd���Ĵ����A�ӤH�m�W�ιq��\n");
		printf("EX : �H�Υd�d�� �H�Υd�w���X �H�Υd���Ĵ��� �ӤH�m�W �q��\n");
		printf("EX : 6547549724165487 123 05/24 ���p�� 0935456789\n");
		printf("�п�J :�@");
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
			printf("�H�Υd��T�έӤH��T���~\n");
		}
	}
	if(check == 0){
		printf("��J���ƹL�h�A�O�_���s�i���x��...y���s,n���}\n");
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
		printf("�п�J���ҽX : ");
		scanf("%d", &temp);
		if(temp == text){
			check = 1;
			break;
		}
		else{
			printf("���ҽX���~\n");
		}
	}
	if(check == 0){
		printf("��J���ƹL�h�A�O�_���s�i���x��...y���s,n���}\n");
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
	
	printf("��J�x�Ȫ��B : ");
	scanf("%d", &temp);
	totalAmount += temp;
	return totalAmount;
}
