#include<stdio.h>

int adder(int n1, int n2) {
	return n1 + n2; //return value은 오로지 한개마 ㄴ가능하다.
}
int sub(int n1, int n2) {
	
	return  n1 - n2;
}


int main() {
	int sum;
	sum= adder(10, 20);// 대입연산자는 우변부터 처리한다.
						// 좌변은 '공간', 우변은 '값'
	printf("sum=%d\n", sum);
	int result;
	result = sub(10, 20);
	printf("result=%d\n", result); //-10



}