#include<stdio.h>

//변수 : 데이터를 저장하는 공간
//포인터 변수 : 주소를 저장하는 공간
//이중 포인터 변수 : 포인터 변수의 주소를 저장하는 공간(즉, 주소의 주소를 저장하는 공간)

int main() {
	int num=10;
	int* p = &num; //p->num (포인터)
	int** pp = &p; //pp->p (이중포인터)
	//				pp -> p -> num

	printf("num=%d\n", num);
	printf("p=%p\n", p); //p=num 주소
	printf("pp=%p\n\n", pp); //pp=p 주소

	printf("*p=%d\n", *p); //p가 가르키는 공간(=num)
	printf("*pp=%p\n", *pp); // pp가 가르키는 공간(=p)

	printf("**pp=%d\n", **pp); //pp가 가르키는 p, p가 가르키는 num의 값
	// 다단계 참조















}