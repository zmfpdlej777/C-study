#include<stdio.h>

int Hello(int n1) {
	for (int i=1; i <= n1; i++) {
		printf("Hello World!\n");
	}
}

int bigger(int n1, int n2) {
	if (n1 > n2) { printf("첫번째 정수가 더 큽니다\n\n"); }
	else if (n1 < n2) { printf("두번째 정수가 더 큽니다.\n\n"); }
	else { printf("같다\n\n"); }
}

int yak(int n1) {
	for (int i = 1; i <= n1; i++) {
		if (n1 % i == 0) { printf("%d ", i); }
	}
}

int sum(int n1) {
	int total=0;
	for (int i = 1; i <= n1;i++) {
		total += i;
		
	}
		return total;

}

int sosu(int n1) { //소수=1, 아니면=0
	int j;
	for (int j = 2; j <= n1; j++);{
		{ if (n1 % j == 0) { return 0; }
		}
	return 1;
}





int main()
{//1. Hello라는 이름의 함수에 정수 n값을 전달하여 호출시 n번만큼
// Hello world!를 출력
// 입력 : 5 => 출력 : 5번
	int n1;
	printf("정수 입력 : ");
	scanf_s("%d", &n1);
	Hello(n1);

// 2. 두 정수를 입력받아서 큰 수를 출력하는 함수 구현
// 단, return X
	int n2, n3;
	printf("\n두 정수 입력:");
	scanf_s("%d %d", &n2, &n3);
	bigger(n2, n3);

// 3. 입력받은 정수의 약수를 구하는 함수 구현
// 단, return X
	int n4;
	printf("\n약수생성기:");
	scanf_s("%d", &n4);
	yak(n4);

// 4. 입력받은 정수까지의 합계를 반환하는 함수 구현
	int n6;
	printf("\n여기까지 합:");
	scanf_s("%d", &n6);
	printf("합계 : %d",sum(n6));


// 5. 입력받은 정수의 소수를 판별하는 함수 구현
// 만약 소수이면 1반환, 아니면 0반환 return
	int n5;
	printf("\n\n소수판별기:");
	scanf_s("%d", &n5);
	if (sosu(n5)) {printf("%d는 소수\n"); } //if의 ()안에 1이 들어가면 True가 되니까 참이 되서 소수입니다~가 나오는거임;
	else {
		printf("%d는 소수 아님\n");
	}















}