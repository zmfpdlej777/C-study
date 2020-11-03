#include<stdio.h>

int num3; //전역변수 : 특정 변수 내에서가 아닌, 바깥에 만들어진 변수, 코드 내의 모든 함수가 공유하는 변수
		  // 1.초기화 안하면 0들어감
		  // 2.함수내에서 소환 당할때마다 계속해서 값이 바뀌기 때문에 잘 쓰지않는다.
		  // 3.지역변수와 전역변수가 이름이 같다면 지역변수가 우선시된다!

int adder_1(int n1, int n2) { //adder의 지역변수(*매개변수도 지역변수의 일종이다)
	n1 += 10;
	n2 += 20;
	num3 += 30;
	printf("함수 내부 n1=%d, n2=%d, num3=%d\n", n1, n2,num3);
	return n1 + n2;
}

int main() {
	int num1 = 10, num2 = 20;
	printf("함수 호출 전 num1=%d,num2=%d,num3=%d\n", num1, num2,num3);
	adder_1(num1, num2);
	printf("함수 호출 후 num1=%d,num2=%d,num3=%d\n", num1, num2,num3);
	printf("\n");








}