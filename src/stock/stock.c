#include <stdio.h>
#include <stdlib.h>
#include "stock.h" 

int stock(){
	char function;
	char funA,funB,funC;
	
	while(1) {
		printf("A查詢金融市場即時資訊 B查詢股票市場分析 C查詢當日股市最高點與最低點\n");
		printf("請輸入A B C or Z to exit\n");
		scanf("\n%c",&function);
			
		if(function == 'A' || function == 'a') {
			printf("歡迎使用金融市場及時資訊\n");
			printf("請選擇查詢項目:\n");
			printf("A查詢股票資訊 B查詢股價漲跌情況 C查詢物價新聞\n");
			printf("請輸入A B C\n");
			scanf("\n%c",&funA);
				
			if(funA == 'A' || funA == 'a') {
				printf("股票資訊\n");
				printf("https://goodinfo.tw/StockInfo/index.asp\n");
				continue;
			}
			else if(funA == 'B' || funA == 'b') {
				printf("股價漲跌情況\n");
				printf("https://www.wantgoo.com/stock/twstock/stat\n");
				continue;
			}
			else if(funA == 'C' || funA == 'c') {
				printf("物價新聞\n");
				printf("https://money.udn.com/money/breaknews/1001\n");
				continue;
			}	
		}
		else if(function == 'B' || function == 'b') {
			printf("歡迎使用股票市場分析\n");
			printf("請選擇查詢項目:\n");
			printf("A查詢股價風險評估 B股市專家建議\n");
			printf("請輸入A B \n");
			scanf("\n%c",&funB);
				
			if(funB == 'A' || funB == 'a') {
					printf("股價風險評估\n");
					printf("https://statementdog.com/screeners\n");
					continue;
			}
			else if(funB == 'B' || funB == 'b') {
				printf("股市專家建議\n");
				printf("https://statementdog.com/screeners\n");
				continue;
			}
		}
		else if(function == 'C' || function == 'c'){
			printf("歡迎使用當日股市最高點與最低點\n");
			printf("請選擇查詢項目:\n");
			printf("A Max B Minum\n");
			printf("請輸入A B\n");
			scanf("\n%c",&funC);
				
			if(funC == 'A' || funC == 'a') {
				printf("Max\n");
				printf("https://tw.stock.yahoo.com/s/tse.php\n");
				continue;
			}
			else if(funC == 'B' || funC == 'b') {
				printf("Minum\n");
				printf("https://tw.stock.yahoo.com/s/tse.php\n");
				continue;
			}	
		}
		else if(function == 'Z' || function == 'z'){
			return 0;
		}
		else{
			printf("Error 輸入錯誤!!! 請重新輸入\n");
			continue;
		}
	}
}
