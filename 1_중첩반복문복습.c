#include<stdio.h>

int main() {
	
	for (int j = 1; j <= 5; j++) { //행 반복 : 줄반복
		printf("%d : ", j);
		
		for (int i = 1; i <= 5; i++)
		{// 열 반복 : 데이터 반복
			printf("%d ", i);
		}
		printf("\n");
	}
	printf("\n\n");

	int star;
	printf("찍을 별의 수 :");
	scanf_s("%d", &star);

	for (int i = 0; i < star; i++) {
		for (int j = 0; j < star; j++) {
			printf("*");
		}
		printf("\n");
	}











	}