#include<stdio.h>
#include"sum.h"

int main() {
	int num;
	printf("정수입력 : ");
	scanf_s("%d", &num);

	printf("%d까지의 합 : %d\n", num, sum(num));

	printf("%d의 거꾸로수 : %d\n", num, reverse(num));















}