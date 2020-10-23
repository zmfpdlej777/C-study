#include<stdio.h>

int main()
{// 2. 대입연산자 : 변수에 값을 할당하는 연산자
//   -*좌변에는 '공간'을 의미하고, 우변은 '결과값'을 의미한다.
//   -대입 연산은 우변부터 먼저 처리한다.
	int num = 10;
	printf("num=%d\n", num);
	num = num + 20;
	printf("num=%d\n", num);

//	 1) 복합 대입 연산자 : 산술 + 대입 연산자
	int N1 = 10;
	N1 += 10; //== n1=n1+10
	printf("\nn1=%d\n", N1);

	N1 -= 5;
	printf("n1=%d\n", N1);

	N1 *= 2;
	printf("n1=%d\n", N1);

	N1 /= 3;
	printf("n1=%d\n", N1);

	N1 %= 4;
	printf("n1=%d\n", N1);

//**대연연산은 우변부터 처리
	int n1, n2, n3;
	n1 = n2 = n3 = 30;
	printf("\nn1=%d,n2=%d,n3=%d\n", n1, n2, n3);

//***정처기 참고**
	n1 = 10;
	n2 = 20;
	n3 = 30;
	n1 += n2 += n3;
	printf("n1=60? %d, n2=50? %d, n3=30 %d\n", n1, n2, n3);

	n1 *= n2 -= 50;
	printf("n1=0? %d, n2=0? %d, n3=30 %d\n", n1, n2, n3);
	
}