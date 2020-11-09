#include<stdio.h>
#include<stdlib.h> //랜덤 관련 함수도 stdlib.h 헤더에 있다*
#include<time.h> //시간관련함수
#define MAX 6

void printArr(int* arr) {
	printf("배열 :");
	for (int i = 0; i < MAX; i++) {
		printf("%d ", *(arr + i));
	}
}

int arrayMax(int* n) {
	int max;
		max = *(n); //여기서 n은 가져온 배열의 맨처음(시작)값
	for (int i = 0; i < MAX; i++) {
		if (max < *(n+i)) { max = *(n +i); }

	}
		return max;

}


int main() {
	srand(time(NULL)); //(현재시간(초단위)) : 랜덤표의 시작위치 => 다양한 랜덤을뽑게하는 효과

	int num = rand() %100; //rand() : 32,768(0~32,767까지 수를 '반환')
				  //  ↑↑ : 나머지는 0~99까지라서 무조건 그 사이에 나오게 만들어줌
	printf("%d\n", num);

	int arr[MAX];
	for (int i = 0; i < MAX; i++) {
		arr[i] = rand() % 100; 
	}

	printf("\n\n");
	printArr(arr);
	printf("\n\n");

	printf("배열중의 최대값 : %d\n", arrayMax(arr));










}