#include<stdio.h>

int adder_1(int n1, int n2) { //n1= num1, n2=num2
	n1 += 10;
	n2 += 20;
	printf("함수 내부) n1=%d, n2=%d\n", n1, n2);
	return n1 + n2;
}

int adder_2(int num1, int num2) { //num1=num1, num2=num2
	//지역변수 : 매개변수와 함수 내에서 만들어진 변수. 호출될때 만들어진다. return후에 반환되고 나면 실제로 메모리에서 사라진다.
	
	num1 += 10;
	num2 += 20;
	printf("함수 내부) n1=%d, n2=%d\n", num1, num2);
	return num1 + num2;
}

int main() {
	int num1, num2; //adder_2의 매개변수와 이름은 같지만 다른 변수이다.
					//여기의 num1,2는 global 변수 = '원본'
	printf("두 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	printf("---------adder_1----------\n");
	printf("함수 호출 전) num1=%d, num2=%d\n", num1, num2);
	adder_1(num1, num2);
	printf("함수 호출 후) num1=%d, num2=%d\n", num1, num2);

	printf("---------adder_2----------\n");
	printf("함수 호출 전) num1=%d, num2=%d\n", num1, num2);
	adder_2(num1, num2);
	printf("함수 호출 후) num1=%d, num2=%d\n", num1, num2);








}