#include<stdio.h>
#include<stdlib.h>
int main() {
	//1. heap������ ������, �Ǽ��� ������ �ϳ��� ����
	//2. ������� ������ �Է¹ޱ�.
	//3. �Է¹��� ���� ���.


	int* n = (int*)malloc(sizeof(int));
	double* db = (double*)malloc(sizeof(double));

	printf("�����Է�:");
	scanf_s("%d", *&n); //<-?
	printf("\n");
	printf("�Ǽ��Է�:");
	scanf_s("%lf", db);

	printf("int=%d, double=%.2lf\n", *n, *db);
	printf("\n");
	free(n);
	free(db);
	printf("int=%d, double=%.2lf\n", *n, *db);












}