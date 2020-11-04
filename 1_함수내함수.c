#include<stdio.h>

int sosu(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) { return 0; }
	}
	return 1; //약수가 없어야 여기까지 코드가 실행됨
}

 void sosu_2(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (sosu(i)) { //sosu은 소수면 1을 반환, 소수가 아니면 0반환
			printf("%2d ", i); //if(1) => 참, if(0) => 거짓
			count++;
			if (count % 10 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\n소수 갯수 : %d\n", count);
}

int main() {
	int num;
	int count = 0;
	printf("정수입력 :");
	scanf_s("%d", &num);

	sosu_2(num);
	





}