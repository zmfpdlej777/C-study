#include<stdio.h>
#include"소수함수.h"


int main() {
	int arr_1[3] = { 10,20,30 };
	int arr_2[6] = { 11,22,33,44,55,66 };

	//배열 개수를 세어 보자~
	printfArray(arr_1,3);
	printfArray(arr_2,6);

	//배열 크기
	printf("sizeof(arr_1)=%d\n", sizeof(arr_1));
	printf("sizeoff(arr_1[0])=%d\n", sizeof(arr_1[0]));
	printf("배열 개수=%d\n", sizeof(arr_1) / sizeof(arr_1[0]));

	int count = sizeof(arr_2) / sizeof(arr_2[0]);
	printfArray(arr_1, count);
	printfArray(arr_2, count);









}

