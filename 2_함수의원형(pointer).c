#include<stdio.h>
#define MAX 10	//이 c파일에서 MAX는 ~로 고정시키겠다. 
//↑↑치환구문 : 코드 컴파일시 코드 내에서 변경되어 실행된다. (매크로 상수라고도 한다)
//    ↑ 전처리구문

//void printArr(int arr[]){ ↓↓ 원형↓↓
void printArr(int* arr){

for (int i = 0; i < MAX; i++) {
	//printf("%d ", arr[i]); ↓↓ 원형↓↓
	//printf("%d ", *(arr+i));
	  printf("%d ", *arr);
	  arr = arr + 1;
}
printf("\n");
}

int main() {
	int A[MAX] = { 10,20,30,40,50 };
	int max = 5; //int형 공간 4byte => max라는 공간에 5를 부여한것.
				 //위의 MAX는 MAX자체가 5와 같은 '상수' 역할을 함

	//int arr[5];
	int arr[MAX];
	int num = 10;
	for (int i = 0; i < MAX; i++) {
		arr[i] = num;
		num += 10;
	}

	printArr(arr);












}