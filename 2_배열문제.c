#include<stdio.h>
#include"���������Լ�.h"
#include<string.h>

int main() {
	//1. ���� 5���� ������ �� �ִ� �� �迭 ����
	//2. 1���� �迭�� ���ڸ� Ű����� �Է¹޾� ������� ����
	//3. �Է¹��� �迭�� �Ϸķ� ���
	//4. *�迭�� �ִ밪,�ּҰ� ���

	int asd[20];
	for (int i = 0; i < 5; i++) {
		int num;
		printf("���� �Է�:");
		scanf_s("%d", &num); // == scanf_s("%d",&asd[1]));
		asd[i] = num;

	}
	printf("\n");
	printf("%d", asd[0]);

	printf("�ִ밪 : %d\n",Max(asd));
	printf("\n");

	printf("�ּҰ� : %d\n",Min(asd));
	printf("\n");

	allview(asd);


	// ���̵�, �н����带 �Է¹޾�
	// �Ʒ��� ������ ������ �α��� ������ ���
	char ID[20] = "itbank";
	char PW[20] = "qwe@123";
	char id[20];
	char pw[20];
	printf("\n\n===========��������==========");
	printf("\nID :");
	scanf_s("%s", id, sizeof(id));
	printf("\nPW :");
	scanf_s("%s", pw, 20);
	//printf("%s\n", id);
	if (!strcmp(ID, id) && !strcmp(PW, pw)) { printf("�α��μ���\n"); }
	else { printf("�α��� ����\n"); }













}