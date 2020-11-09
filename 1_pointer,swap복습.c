#include<stdio.h>

//포인터 변수 : 주소를 저장하는 변수
// 1. 주소(=메모리상위치)를 기억하는 변수
// 2. 주소로써 메모리상 데이터를 접근하여 참조하는 방식

void swap(int* n1, int* n2) { // n1=0x100 : main의 n1주소
							  // n2=0x100 : main의 n2주소
	int tmp;

	tmp = *n1; //n1의 데이터를 가져와라. (main의 첫번째 매개변수의 데이터를 가져와라)
	*n1 = *n2;
	*n2 = tmp;
}

int main() {
	int num = 10;
	int* pnum = &num; //pnum -> num  
	// * : 참조 연산자, 해당 주소안의 메모리 값을 참조
	printf("pnum=0x%p\n", pnum);
	printf("*pnum=%d\n", *pnum);

	*pnum = 20;
	printf("num=%d\n", num);

	// swap : 데이터 교체 알고리즘
	int n1 = 10, n2 = 20;
	

	swap(&n1, &n2);
	printf("n1=%d, n2=%d\n", n1, n2);






}