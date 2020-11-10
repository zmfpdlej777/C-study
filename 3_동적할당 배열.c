#include<stdio.h>
#include<stdlib.h>

void inArr(int* arr,int num) {
	int count = 0;
	for (int i = 0; i < num; i++) {
		*(arr + i) = count;
		count++;
	}
}


void printArr(int* arr, int num) {
	for (int i = 0; i < num; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");

}

int main() {
	int num = 5;
//	int arr[num] ; 정적할당 배열은 크기가 미리 정해져이썽야 한다.
	//				=> 따라서 변수를 크기로 받을 수 없다. 입력도 못받는다.

//	int arr[20000000] ; 지역변수가 할당되는 Stack 메모리 영역은 크기가 크지 않다.

	printf("배열 갯수:");
	scanf_s("%d", &num);


	int* arr = (int*)malloc(sizeof(int) * num); //동적할당 배열만들기 (int * num)

	inArr(arr,num);

	printArr(arr,num);

	free(arr); //일반 동적할당 공간 제거와 똑같이 제거


	//함수 호출시 매개변수 형태
	// 1. 함수 호출시 (X&)값을 전달하면 참조단계(*)가 늘어나지 않는다.
	// 2. 함수 호출시 (&)주소를 전달하면 참조단계(*)가 늘어난다.

	//ex)
	//함수 호출시 int의 값을 전달 => 매개변수는 int
	//함수 호출시 int의 주소를 전달 => 매개변수는 int*
	//함수 호출시 int*의 값을 전달 => 매개변수는 int*
	//함수 호출시 int*의 주소를 전달 => 매개변수는 int**












}