#include<stdio.h>
// 6. 조건 연산자 : 조건에 따라 다른 값을 선택하는 연산자

int main()
{
	int n1, n2;
	printf("두 정수 입력 :");
	scanf_s("%d %d", &n1, &n2);
	int result = (n1 > n2) ? n2 : n2;
	//			 ( 조건식) ?  참 : 거짓; 
	// 조건식을 비교하여, 결과가 참이면 참(앞)을 출력, 거짓이면 거짓(뒤) 출력
	// *조건은 값을 선택하기 때문에 조건문과 다르다.
	printf("더 큰 수 : %d\n\n", result);

//연습문제 1. n변수에 키보드로 정수를 입력받아 n이 3의 배수이면 result에 n값을 저장하고,
	//	     아니면 0을 저장해서 출력.

//결과 )
//입력 : 3
//출력 : result=3

//입력 : 4
//출력 : result=0

	int num;
	printf("\n정수 입력:");
	scanf_s("%d", &num);
	int result2 = (num % 3 == 0) ? 3 : 0;
	printf("result = %d", result2);


}