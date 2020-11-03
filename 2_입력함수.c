#include<stdio.h>

int adder(int n1, int n2) { //n1=num1, n2=num2
	printf("n1=%d,n2=%d\n", n1, n2);
	return n1 + n2 ;
}


int main() {
	int num1, num2;
	printf("두 정수 입력:");
	scanf_s("%d %d", &num1, &num2);

	printf("%d\n", adder(num1, num2));



}