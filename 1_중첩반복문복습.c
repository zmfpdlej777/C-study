#include<stdio.h>

int main() {
	
	for (int j = 1; j <= 5; j++) { //�� �ݺ� : �ٹݺ�
		printf("%d : ", j);
		
		for (int i = 1; i <= 5; i++)
		{// �� �ݺ� : ������ �ݺ�
			printf("%d ", i);
		}
		printf("\n");
	}
	printf("\n\n");

	int star;
	printf("���� ���� �� :");
	scanf_s("%d", &star);

	for (int i = 0; i < star; i++) {
		for (int j = 0; j < star; j++) {
			printf("*");
		}
		printf("\n");
	}











	}