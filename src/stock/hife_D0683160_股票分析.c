#include <stdio.h>
#include <stdlib.h>

int main(){
	char function;
	char funA,funB,funC;
	printf("�п�ܭn�ϥΪ��\��:\n");
	printf("A�d�ߪ��ĥ����Y�ɸ�T B�d�ߪѲ��������R C�d�߷��ѥ��̰��I�P�̧C�I\n");
	printf("�п�JA B C\n");
	scanf("%c",&function);
			
	if(function == 'A' || function == 'a') {
		printf("�w��ϥΪ��ĥ����ήɸ�T\n");
		printf("�п�ܬd�߶���:\n");
		printf("A�d�ߪѲ���T B�d�ߪѻ����^���p C�d�ߪ����s�D\n");
		printf("�п�JA B C\n");
		scanf("%c",&funA);
			
		if(funA == 'A' || funA == 'a') {
			printf("�Ѳ���T\n");
			printf("https://goodinfo.tw/StockInfo/index.asp");
		}
		else if(funA == 'B' || funA == 'b') {
			printf("�ѻ����^���p\n");
			printf("https://www.wantgoo.com/stock/twstock/stat");
		}
		else if(funA == 'C' || funA == 'c') {
			printf("�����s�D\n");
			printf("https://money.udn.com/money/breaknews/1001");
		}	
	}
	else if(function == 'B' || function == 'b') {
		printf("�w��ϥΪѲ��������R\n");
		printf("�п�ܬd�߶���:\n");
		printf("A�d�ߪѻ����I���� B�ѥ��M�a��ĳ\n");
		printf("�п�JA B \n");
		scanf("%c",&funB);
			
		if(funB == 'A' || funB == 'a') {
				printf("�ѻ����I����\n");
				printf("https://statementdog.com/screeners");
		}
		else if(funB == 'B' || funB == 'b') {
			printf("�ѥ��M�a��ĳ\n");
			printf("https://statementdog.com/screeners");
		}
	}
		else if(function == 'C' || function == 'c'){
			printf("�w��ϥη��ѥ��̰��I�P�̧C�I\n");
			printf("�п�ܬd�߶���:\n");
			printf("A Max B Minum\n");
			printf("�п�JA B\n");
			scanf("%c",&funC);
			
		if(funC == 'A' || funC == 'a') {
			printf("Max\n");
			printf("https://tw.stock.yahoo.com/s/tse.php");
		}
		else if(funC == 'B' || funC == 'b') {
			printf("Minum\n");
			printf("https://tw.stock.yahoo.com/s/tse.php");
		}	
	}
	else{
		printf("Error ��J���~!!! �Э��s��J\n");
		printf("�п�JA B C\n");	
	}
	
	return 0;
		
}
