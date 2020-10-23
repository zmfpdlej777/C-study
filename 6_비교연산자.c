#include<stdio.h>
// 4. 비교(관계)연산자 : 두 데이터를 비교해 참/거짓의 결과를 얻는 연산자
// ex) ==, !=, >, >=, <, <=

int main()
{//비교연산자는 참/거짓의 결과를 얻는데, C언어에서 거짓은 0, 참은 0이 아닌 모든 수(*참이 꼭 1은 아니다!!)
	printf("5>2?_ %d\n", 5 > 2); // True==1
	printf("5<2?_ %d\n", 5 < 2); // False==0

	int n;
	printf("정수 입력:");
	scanf_s("%d", &n);
	printf("%d>10의 결과 : %d\n", n, n > 10); 
	printf("%d>=10의 결과 : %d\n", n, n >= 10); 
	printf("%d<10의 결과 : %d\n", n, n < 10); 
	printf("%d<=10의 결과 : %d\n", n, n <= 10); 
	printf("%d==10의 결과 : %d\n", n, n == 10); 
	printf("%d!=10의 결과 : %d\n", n, n != 10); 



}