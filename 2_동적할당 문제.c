#include<stdio.h>
#include<stdlib.h>
int main() {
	//1. heap영역에 정수형, 실수형 공간을 하나씩 생성
	//2. 만들어진 공간에 입력받기.
	//3. 입력받은 값을 출력.


	int* n = (int*)malloc(sizeof(int));
	double* db = (double*)malloc(sizeof(double));

	printf("정수입력:");
	scanf_s("%d", *&n); //<-?
	printf("\n");
	printf("실수입력:");
	scanf_s("%lf", db);

	printf("int=%d, double=%.2lf\n", *n, *db);
	printf("\n");
	free(n);
	free(db);
	printf("int=%d, double=%.2lf\n", *n, *db);












}