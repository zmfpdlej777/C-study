#include<stdio.h>
#include"소수함수.h"


int main() {
	int arr[5]; //빈배열 선언

	double arr2[5] = { 1.12,2.34,3.45,4.56,5.67 };
	printf("%d\n\n", sizeof(arr2)); //실수는 개당 8byte!

	Arraylf(arr2,5); //배열내 값들이 double이기 때문에 함수의 특징도 double로 새로 만들었음 'Arraylf'
	Arraylf(arr, 5);

	arr[0] = 10;
	printf("\n\n");
	Arrayint(arr, 5);
	// 문제) 반복으로 arr배열에 20 30 40 50순서대로 채워보십쇼
	int num = 10;
	for (int i =0; i < 5; i ++) {
		// arr[i]=(i+1)*10;
		arr[i] = num;
		num += 10;
		}
	Arrayint(arr);













	}






