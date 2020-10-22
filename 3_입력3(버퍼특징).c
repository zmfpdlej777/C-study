#include<stdio.h>
//입력2.c에서 정수>문자열 작성시 일어났던 문제가 정수>정수 작성시 일어날까?

int main()
{
	int n1, n2;
	printf("첫번째 정수 입력:");
	scanf("%d", &n1);
	printf("n1=%d\n", n1);

	//버퍼를 삭제할 필요가없다! 애초에 %d는 정수값만 가져오기 때문. 
	//버퍼에는 \n\n에 남긴하겠지.

	printf("두번째 정수 입력: ");
	scanf("%d", &n2); //%d는 \n을 읽어오지 않음
	printf("n2=%d\n", n2);

	rewind(stdin);
	
	//한번에 두 정수 입력하는 방법 :
	printf("두 정수 입력: ");
	scanf("%d %d", &n1, &n2);
	printf("n1= %d, n2=%d\n", n1, n2);
}