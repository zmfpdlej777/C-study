#include<stdio.h>

int main() {
	int arr[5] = { 10,20,30,40,50 };
	int* p1;
	double* p2;
	p1 = arr; //p1은 int형 포인터	 => 아~ 내가 가리키는 곳의 한칸은 4byte구나~
	p2 = arr; //p2는 double형 포인터  => 아~ 내가 가르키는 곳의 한칸은 8byte구나~

	printf("*p1=%d\n", *p1);
	printf("*p2=%d\n", *p2);
	printf("\n");
	printf("*(p1+1)=%d\n", *(p1 + 1)); //여기서 +1은 4byte => 4byte 다음칸은 '20'
	printf("*(p2+1)=%d\n", *(p2 + 1)); //야기서 +1은 8byte => 8byte 다음칸은 '30'
	// ※ 원본의 자료형에 맞춰서 포인터 변수의 자료형을 맞춰야 예상치 못한 결과를 내지 않는다.











}